#include "drift.h"
#include <cmath>
#include <vector>
#include <iostream>

namespace mc {
    float average(std::vector<float> previous30Days){
        float total = 0;
        for (int i=0; i < previous30Days.size(); i++) {
            total += previous30Days[i];
        }
        
        return (total / previous30Days.size());
    }

    float variance (std::vector<float> observations, float sampleMean) {
        
        float varianceTotal = 0.0;

        for (int i = 0; i < 26; i++){
            varianceTotal += pow(observations[i] - sampleMean, 2);
        }

        std::cout << varianceTotal << '\n';

        return (varianceTotal / (26 - 1)); // Can result in division by 0
    }


    float drift(float averageDailyReturn, float variance){
        return averageDailyReturn - (variance / 2);
    }
}