#include "nextDayPrice.h"
#include <cmath>

namespace mc {

    float nextDayPrice(float currentPrice, float drift, float randomValue) {
        return currentPrice * exp(drift + randomValue); 
    }

}