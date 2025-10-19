#include <gtest/gtest.h>
#include "periodicDailyReturn.h"

TEST(PeriodicDailyReturns, FirstTestPDR) {
  EXPECT_NEAR(mc::periodicDailyReturn(181.01, 182.1), -0.00600378, 1e-6);
}
