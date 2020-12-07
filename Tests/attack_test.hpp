#ifndef __ATTACK_TEST_HPP__
#define __ATTACK_TEST_HPP__

#include "gtest/gtest.h"
#include "../guys/ElectricGuy.hpp"
#include "../guys/FireGuy.hpp"
#include "../guys/GrassGuy.hpp"
#include "../guys/WaterGuy.hpp"
#include "../Attacks/NormalAttackStrategy.hpp"
#include "../Attacks/TypedAttackStrategy.hpp"

TEST(AttackTEST, EvsF) {
  Guy* user = new ElectricGuy();
  Guy* opponent = new FireGuy();
  Attack* newattack = new TypedAttackStrategy(user);
  user -> set_attack(newattack);
  user -> attack(opponent);
  EXPECT_EQ(opponent->getHealth(), 170);
}

TEST(AttackTEST, EvsW) {
  Guy* user = new ElectricGuy();
  Guy* opponent = new WaterGuy();
  Attack* newattack = new TypedAttackStrategy(user);
  user -> set_attack(newattack);
  user -> attack(opponent);
  EXPECT_EQ(opponent->getHealth(), 140);
}

TEST(AttackTEST, FvsE) {
  Guy* opponent = new ElectricGuy();
  Guy* user = new FireGuy();
  Attack* newattack = new TypedAttackStrategy(user);
  user -> set_attack(newattack);
  user -> attack(opponent);
  EXPECT_EQ(opponent->getHealth(), 170);
}

TEST(AttackTEST, GvsE) {
  Guy* user = new GrassGuy();
  Guy* opponent = new ElectricGuy();
  Attack* newattack = new TypedAttackStrategy(user);
  user -> set_attack(newattack);
  user -> attack(opponent);
  EXPECT_EQ(opponent->getHealth(), 140);
}

TEST(AttackTEST, FvsG) {
  Guy* user = new FireGuy();
  Guy* opponent = new GrassGuy();
  Attack* newattack = new TypedAttackStrategy(user);
  user -> set_attack(newattack);
  user -> attack(opponent);
  EXPECT_EQ(opponent->getHealth(), 140);
}

TEST(AttackTEST, WvsF) {
  Guy* user = new WaterGuy();
  Guy* opponent = new FireGuy();
  Attack* newattack = new TypedAttackStrategy(user);
  user -> set_attack(newattack);
  user -> attack(opponent);
  EXPECT_EQ(opponent->getHealth(), 140);
}

TEST(AttackTEST, NormalAttack ) {
  Guy* opponent = new GrassGuy();
  Guy* user = new FireGuy();
  Attack* newattack = new NormalAttackStrategy(user);
  user -> set_attack(newattack);
  user -> attack(opponent);
  EXPECT_EQ(opponent->getHealth(), 150);
}

#endif