#pragma once
#include <vector>
#include <tuple>

namespace mc {
    std::tuple<std::vector<float>, float> sampleMeanLogReturnTuple (std::vector<float> previous30Days);
    float variance(std::vector<float> observations, float sampleMean);
    float averageDailyReturn (std::vector<float>);
    float drift (float averageDailyReturn, float variance);
}