#pragma once
#include <vector>

namespace mc {
    float average(std::vector<float>);
    float variance(std::vector<float> observations, float sampleMean);
    float averageDailyReturn (std::vector<float>);
    float drift (float averageDailyReturn, float variance);
}