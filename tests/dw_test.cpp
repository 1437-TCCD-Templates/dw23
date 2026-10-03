#include "dw.h"
#include <gtest/gtest.h>

TEST(Circle, ComputesAreaFromRadius) {
  Circle c(2.0);
  EXPECT_NEAR(c.area(), 12.566, 0.01);
}

TEST(Circle, PolymorphicCallThroughBasePointer) {
  Circle c(1.0);
  Shape *shape = &c;
  EXPECT_NEAR(shape->area(), 3.14159, 0.001);
}
