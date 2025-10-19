#include <iostream>
#include "periodicDailyReturn.h"
#include "drift.h"
#include <vector>


int main(){

    // Calculate the Periodic Daily Returns
    float currentDayPrice = 181;
    float previousDayPrice = 182;

    // PDR Implementation
    float periodicDailyReturn = mc::periodicDailyReturn(currentDayPrice, previousDayPrice);
    std::cout << "Periodic Daily Returns: " << periodicDailyReturn << '\n';


    std::vector<float> previous26days = {
        180.18, 182.23, 184.80, 184.77, 187.97, 193.51,
        192.23, 186.57, 186.23, 185.50, 189.19, 189.60,
        185.24, 182.08, 180.43, 178.17, 174.48, 179.77,
        181.97, 175.30, 175.77, 173.98, 172.64, 177.00,
        175.67, 177.77
    };

    float sampleMean = mc::average(previous26days);
    float variance = mc::variance(previous26days, sampleMean);    

    std::cout << "Sample Mean / Average Daily Returns: " << sampleMean << '\n';
    std::cout << "Variance: " << variance << "\n";

    float averageDailyReturns = mc::average(previous26days);

    float drift = mc::drift(averageDailyReturns, variance);

    std::cout << "Drift: " << drift << '\n';


    return 0;
}