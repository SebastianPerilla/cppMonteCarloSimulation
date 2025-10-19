#include "drift.h"

namespace mc {
    float drift(float averageDailyReturn, float variance){
        return averageDailyReturn - (variance / 2);
    }
}