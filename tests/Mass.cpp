#include <gtest/gtest.h>
#include "Mass.hpp"

const double ERR = 0.0001;

TEST(MassTest, KiloToPound) {
   Kilo k = Kilo(30);
   ASSERT_NEAR(k.toPound(), 66.138, ERR);
}

TEST(MassTest, KiloToStone) {
   Kilo k = Kilo(30);
   ASSERT_NEAR(k.toStone(), 4.72419, ERR);
}

TEST(MassTest, PoundToKilo) {
   Pound p = Pound(70);
   ASSERT_NEAR(p.toKilo(), 31.7517, ERR);
}

TEST(MassTest, PoundToStone) {
   Pound p = Pound(70);
   ASSERT_NEAR(p.toStone(), 5.0, ERR);
}

TEST(MassTest, StoneToKilo) {
   Stone s = Stone(10);
   ASSERT_NEAR(s.toKilo(), 63.5020, ERR);
}

TEST(MassTest, StoneToPound) {
   Stone s = Stone(10);
   ASSERT_NEAR(s.toPound(), 140.0, ERR);
}