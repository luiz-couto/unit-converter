#include <gtest/gtest.h>
#include "Temperature.hpp"

const double ERROR = 0.0001;

TEST(TemperatureTest, CelsiusToFahr) {
   Celsius c = Celsius(30);
   ASSERT_NEAR(c.toFarenheit(), 86, ERROR);
}