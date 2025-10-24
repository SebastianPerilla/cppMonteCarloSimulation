#include <gtest/gtest.h>
#include "periodicDailyReturn.h"
#include "drift.h"

TEST(PeriodicDailyReturns, FirstTestPDR) {
  EXPECT_NEAR(mc::periodicDailyReturn(181.01, 182.1), -0.00600378, 1e-6);
};


// TEST(Average, TestAverages) {
//   std::vector<float> testList = {10.0, 20.0};
//   EXPECT_EQ(mc::sampleMeanDailyReturn(testList), 15.0);
// }
