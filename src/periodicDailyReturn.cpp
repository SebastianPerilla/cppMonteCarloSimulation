#include "periodicDailyReturn.h"
#include <cmath>

namespace pdr {
    float periodicDailyReturn(float currentDayPrice, float previousDayPrice) {
        float currentpdr = log(currentDayPrice / previousDayPrice);
        return currentpdr;
    }
}
