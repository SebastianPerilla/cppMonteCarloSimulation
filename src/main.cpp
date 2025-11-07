#include <iostream>
#include "periodicDailyReturn.h"
#include "drift.h"
#include "randomValue.h"
#include "nextDayPrice.h"

#include <vector>
#include <cmath>
#include <tuple>

int main()
{

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
        175.67, 177.77};

    std::cout << previous26days.size() << '\n';

    for (int i = 0; i < 50; i++)
    {
        // Start of the Formulas for Monte Carlo Simulation
        auto sampleMeanLogReturnsTuple = mc::sampleMeanLogReturnTuple(previous26days);
        std::vector<float> logReturns = std::get<0>(sampleMeanLogReturnsTuple);
        float sampleMean = std::get<1>(sampleMeanLogReturnsTuple);

        float variance = mc::variance(logReturns, sampleMean);
        std::cout << "Sample Mean / Average Daily Returns: " << sampleMean << '\n';
        std::cout << "Variance: " << variance << "\n";

        // float averageDailyReturns = mc::sampleMeanDailyReturn(previous26days);

        // Drift Formula = Average Daily Return - ( Variance / 2 )
        float drift = mc::drift(sampleMean, variance);
        std::cout << "Drift: " << drift << '\n';

        // Random Component
        float standardDeviation = sqrt(variance);
        std::cout << "Standard Deviation: " << standardDeviation << '\n';

        float normalRandomValue = rando::normalRandomValue(10.0, 20.0);

        float randomValue = standardDeviation * normalRandomValue;
        std::cout << "STDV x NormalRandomvalue = RandomValue: "
                  << standardDeviation << " * "
                  << normalRandomValue << " = "
                  << randomValue << '\n';

        float nextDayPrice = mc::nextDayPrice(previous26days[0], drift, randomValue);
        std::cout << "Next Day Price: " << nextDayPrice << '\n';

        std::cout << std::endl;

        previous26days.push_back(nextDayPrice);
    }


    // Histogram  
    for (auto j : previous26days)
    {
        for (int i = 0; i < j * 0.5; i+=2)
        {
            std::cout << "|";
        }
        std::cout << std::endl;
    }

    return 0;
}