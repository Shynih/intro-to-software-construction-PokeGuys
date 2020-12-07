#include "gtest/gtest.h"
#include "factory_tests.cpp"
#include "base_tests.hpp"
#include "guys_tests.hpp"
#include "attack_test.hpp"

int main(int argc, char **argv) {
  ::testing::InitGoogleTest(&argc, argv);
  return RUN_ALL_TESTS();
}
