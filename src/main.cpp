#include <iostream>
#include "periodicDailyReturn.h"
#include "drift.h"
#


int main(){

    // Calculate the Periodic Daily Returns
    float currentDayPrice = 181;
    float previousDayPrice = 182;

    // PDR Implementation
    float periodicDailyReturn = mc::periodicDailyReturn(currentDayPrice, previousDayPrice);
    std::cout << "Periodic Daily Returns: " << periodicDailyReturn << '\n';

    float averageDailyReturn;
    float variance;    

    float drift = mc::drift(averageDailyReturn, variance);


    return 0;
}