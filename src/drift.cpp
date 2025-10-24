#include "drift.h"
#include <cmath>
#include <vector>
#include <iostream>
#include <tuple>

namespace mc {

    std::tuple<std::vector<float>, float> sampleMeanLogReturnTuple (std::vector<float> previous30Days) {
        
        std::vector<float> logReturns;

        float total = 0;
        
        for (int i=1; i < previous30Days.size(); i++) {
            total += log(previous30Days[i] / previous30Days[i-1]);   
            
            logReturns.push_back(total);        
        };

        return {logReturns, (total / logReturns.size())};
    }

    float variance (std::vector<float> logReturns, float sampleMean) {
        
        float varianceTotal = 0.0;

        for (int i = 1; i < logReturns.size(); i++){
            varianceTotal += pow(logReturns[i] - logReturns[i-1], 2);
        }

        return (varianceTotal / (logReturns.size() - 1)); // Can result in division by 0
    }


    float drift(float averageDailyReturn, float variance){
        return averageDailyReturn - (variance / 2);
    }
}