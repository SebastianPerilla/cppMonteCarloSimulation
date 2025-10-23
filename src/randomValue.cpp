#include "randomValue.h"
#include <random>

namespace rando {

    float normalRandomValue() {
        std::default_random_engine generator;
        std::normal_distribution<double> distribution(0.0, 1.0); // mean 0, stddev 1

        float randomNumber = distribution(generator);
        
        return randomNumber;
    }

}