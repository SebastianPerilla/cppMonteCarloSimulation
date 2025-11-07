#include "randomValue.h"
#include <random>
#include "drift.h"

namespace rando {

    float normalRandomValue(float mean, float stdv) {
        std::default_random_engine generator;
        std::normal_distribution<double> distribution(mean, stdv); // mean 0, stddev 1

        float randomNumber = distribution(generator);
        
        return randomNumber;
    }

}