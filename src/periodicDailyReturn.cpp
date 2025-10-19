#include "periodicDailyReturn.h"
#include <cmath>

namespace mc {
    float periodicDailyReturn(float currentDayPrice, float previousDayPrice) {
        float currentpdr = log(currentDayPrice / previousDayPrice);
        return currentpdr;
    }
}
