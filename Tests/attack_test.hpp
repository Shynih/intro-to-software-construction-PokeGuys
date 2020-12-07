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
  user -> set_moves();
  Guy* opponent = new FireGuy();
  opponent -> set_moves();
  Attack* newattack = new TypedAttackStrategy(user);
  user -> set_attack(newattack);
  user -> attack(opponent);
  EXPECT_EQ(opponent->getHealth(), 170);
}

TEST(AttackTEST, EvsW) {
  Guy* user = new ElectricGuy();
  user -> set_moves();
  Guy* opponent = new WaterGuy();
  opponent -> set_moves();
  Attack* newattack = new TypedAttackStrategy(user);
  user -> set_attack(newattack);
  user -> attack(opponent);
  EXPECT_EQ(opponent->getHealth(), 140);
}

TEST(AttackTEST, FvsE) {
  Guy* opponent = new ElectricGuy();
  opponent -> set_moves();
  Guy* user = new FireGuy();
  user -> set_moves();
  Attack* newattack = new TypedAttackStrategy(user);
  user -> set_attack(newattack);
  user -> attack(opponent);
  EXPECT_EQ(opponent->getHealth(), 170);
}

TEST(AttackTEST, GvsE) {
  Guy* user = new GrassGuy();
  user -> set_moves();
  Guy* opponent = new ElectricGuy();
  opponent -> set_moves();
  Attack* newattack = new TypedAttackStrategy(user);
  user -> set_attack(newattack);
  user -> attack(opponent);
  EXPECT_EQ(opponent->getHealth(), 140);
}

TEST(AttackTEST, FvsG) {
  Guy* user = new FireGuy();
  user -> set_moves();
  Guy* opponent = new GrassGuy();
  opponent -> set_moves();
  Attack* newattack = new TypedAttackStrategy(user);
  user -> set_attack(newattack);
  user -> attack(opponent);
  EXPECT_EQ(opponent->getHealth(), 140);
}

TEST(AttackTEST, WvsF) {
  Guy* user = new WaterGuy();
  user -> set_moves();
  Guy* opponent = new FireGuy();
  opponent -> set_moves();
  Attack* newattack = new TypedAttackStrategy(user);
  user -> set_attack(newattack);
  user -> attack(opponent);
  EXPECT_EQ(opponent->getHealth(), 140);
}

TEST(AttackTEST, NormalAttack ) {
  Guy* opponent = new GrassGuy();
  opponent -> set_moves();
  Guy* user = new FireGuy();
  user -> set_moves();
  Attack* newattack = new NormalAttackStrategy(user);
  user -> set_attack(newattack);
  user -> attack(opponent);
  EXPECT_EQ(opponent->getHealth(), 150);
}

#endif
