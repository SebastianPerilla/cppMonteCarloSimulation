#include "drift.h"
#include <cmath>
#include <vector>

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

        for (int i = 0; i < observations.size(); i++){
            varianceTotal += pow(observations[i] - sampleMean, 2);
        }

        return (varianceTotal / (observations.size() - 1));
    }


    float drift(float averageDailyReturn, float variance){
        return averageDailyReturn - (variance / 2);
    }
}