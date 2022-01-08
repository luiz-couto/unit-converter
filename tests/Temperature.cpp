#include <gtest/gtest.h>
#include "Temperature.hpp"

const double ERROR = 0.0001;

TEST(TemperatureTest, CelsiusToFahr) {
   Celsius c = Celsius(30);
   ASSERT_NEAR(c.toFarenheit(), 86, ERROR);
}

TEST(TemperatureTest, CelsiusToKelvin) {
   Celsius c = Celsius(30);
   ASSERT_NEAR(c.toKelvin(), 303.15, ERROR);
}

TEST(TemperatureTest, FahrToCelsius) {
   Fahrenheit f = Fahrenheit(95);
   ASSERT_NEAR(f.toCelsius(), 35, ERROR);
}

TEST(TemperatureTest, FahrToKelvin) {
   Fahrenheit f = Fahrenheit(95);
   ASSERT_NEAR(f.toKelvin(), 308.15, ERROR);
}

TEST(TemperatureTest, KelvinToCelsius) {
   Kelvin k = Kelvin(300);
   ASSERT_NEAR(k.toCelsius(), 26.85, ERROR);
}

TEST(TemperatureTest, KelvinToFahr) {
   Kelvin k = Kelvin(300);
   ASSERT_NEAR(k.toFarenheit(), 80.33, ERROR);
}