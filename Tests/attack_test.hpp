#ifndef __ATTACK_TEST_HPP__
#define __ATTACK_TEST_HPP__

#include "gtest/gtest.h"
#include "../guys/ElectricGuy.hpp"
#include "../guys/FireGuy.hpp"
#include "../guys/GrassGuy.hpp"
#include "../guys/WaterGuy.hpp"
#include "../Attacks/NormalAttackStrategy.hpp"
#include "../Attacks/TypedAttackStrategy.hpp"




TEST(AttackTEST, TypedEvsE) {
  Guy* user = new ElectricGuy();
  user -> set_moves();
  Guy* opponent = new ElectricGuy();
  opponent -> set_moves();
  Attack* newattack = new TypedAttackStrategy(user);
  user -> set_attack(newattack);
  user -> attack(opponent);
  EXPECT_EQ(opponent->getHealth(), 170);
}

TEST(AttackTEST, TypedEvsF) {
  Guy* user = new ElectricGuy();
  user -> set_moves();
  Guy* opponent = new FireGuy();
  opponent -> set_moves();
  Attack* newattack = new TypedAttackStrategy(user);
  user -> set_attack(newattack);
  user -> attack(opponent);
  EXPECT_EQ(opponent->getHealth(), 170);
}

TEST(AttackTEST, TypedEvsW) {
  Guy* user = new ElectricGuy();
  user -> set_moves();
  Guy* opponent = new WaterGuy();
  opponent -> set_moves();
  Attack* newattack = new TypedAttackStrategy(user);
  user -> set_attack(newattack);
  user -> attack(opponent);
  EXPECT_EQ(opponent->getHealth(), 140);
}

TEST(AttackTEST, TypedEvsG) {
  Guy* user = new ElectricGuy();
  user -> set_moves();
  Guy* opponent = new GrassGuy();
  opponent -> set_moves();
  Attack* newattack = new TypedAttackStrategy(user);
  user -> set_attack(newattack);
  user -> attack(opponent);
  EXPECT_EQ(opponent->getHealth(), 170);
}

TEST(AttackTEST, TypedFvsE) {
  Guy* opponent = new ElectricGuy();
  opponent -> set_moves();
  Guy* user = new FireGuy();
  user -> set_moves();
  Attack* newattack = new TypedAttackStrategy(user);
  user -> set_attack(newattack);
  user -> attack(opponent);
  EXPECT_EQ(opponent->getHealth(), 170);
}

TEST(AttackTEST, TypedFvsF) {
  Guy* opponent = new FireGuy();
  opponent -> set_moves();
  Guy* user = new FireGuy();
  user -> set_moves();
  Attack* newattack = new TypedAttackStrategy(user);
  user -> set_attack(newattack);
  user -> attack(opponent);
  EXPECT_EQ(opponent->getHealth(), 170);
}

TEST(AttackTEST, TypedFvsW) {
  Guy* opponent = new WaterGuy();
  opponent -> set_moves();
  Guy* user = new FireGuy();
  user -> set_moves();
  Attack* newattack = new TypedAttackStrategy(user);
  user -> set_attack(newattack);
  user -> attack(opponent);
  EXPECT_EQ(opponent->getHealth(), 170);
}

TEST(AttackTEST, TypedFvsG) {
  Guy* user = new FireGuy();
  user -> set_moves();
  Guy* opponent = new GrassGuy();
  opponent -> set_moves();
  Attack* newattack = new TypedAttackStrategy(user);
  user -> set_attack(newattack);
  user -> attack(opponent);
  EXPECT_EQ(opponent->getHealth(), 140);
}

TEST(AttackTEST, TypedWvsE) {
  Guy* user = new WaterGuy();
  user -> set_moves();
  Guy* opponent = new ElectricGuy();
  opponent -> set_moves();
  Attack* newattack = new TypedAttackStrategy(user);
  user -> set_attack(newattack);
  user -> attack(opponent);
  EXPECT_EQ(opponent->getHealth(), 170);
}

TEST(AttackTEST, TypedWvsF) {
  Guy* user = new WaterGuy();
  user -> set_moves();
  Guy* opponent = new FireGuy();
  opponent -> set_moves();
  Attack* newattack = new TypedAttackStrategy(user);
  user -> set_attack(newattack);
  user -> attack(opponent);
  EXPECT_EQ(opponent->getHealth(), 140);
}

TEST(AttackTEST, TypedWvsW) {
  Guy* user = new WaterGuy();
  user -> set_moves();
  Guy* opponent = new WaterGuy();
  opponent -> set_moves();
  Attack* newattack = new TypedAttackStrategy(user);
  user -> set_attack(newattack);
  user -> attack(opponent);
  EXPECT_EQ(opponent->getHealth(), 170);
}

TEST(AttackTEST, TypedWvsG) {
  Guy* user = new WaterGuy();
  user -> set_moves();
  Guy* opponent = new GrassGuy();
  opponent -> set_moves();
  Attack* newattack = new TypedAttackStrategy(user);
  user -> set_attack(newattack);
  user -> attack(opponent);
  EXPECT_EQ(opponent->getHealth(), 170);
}

TEST(AttackTEST, TypedGvsE) {
  Guy* user = new GrassGuy();
  user -> set_moves();
  Guy* opponent = new ElectricGuy();
  opponent -> set_moves();
  Attack* newattack = new TypedAttackStrategy(user);
  user -> set_attack(newattack);
  user -> attack(opponent);
  EXPECT_EQ(opponent->getHealth(), 140);
}

TEST(AttackTEST, TypedGvsF) {
  Guy* user = new GrassGuy();
  user -> set_moves();
  Guy* opponent = new FireGuy();
  opponent -> set_moves();
  Attack* newattack = new TypedAttackStrategy(user);
  user -> set_attack(newattack);
  user -> attack(opponent);
  EXPECT_EQ(opponent->getHealth(), 170);
}

TEST(AttackTEST, TypedGvsW) {
  Guy* user = new GrassGuy();
  user -> set_moves();
  Guy* opponent = new WaterGuy();
  opponent -> set_moves();
  Attack* newattack = new TypedAttackStrategy(user);
  user -> set_attack(newattack);
  user -> attack(opponent);
  EXPECT_EQ(opponent->getHealth(), 170);
}

TEST(AttackTEST, TypedGvsG) {
  Guy* user = new GrassGuy();
  user -> set_moves();
  Guy* opponent = new GrassGuy();
  opponent -> set_moves();
  Attack* newattack = new TypedAttackStrategy(user);
  user -> set_attack(newattack);
  user -> attack(opponent);
  EXPECT_EQ(opponent->getHealth(), 170);
}




TEST(AttackTEST, NormalEvsE) {
  Guy* user = new ElectricGuy();
  user -> set_moves();
  Guy* opponent = new ElectricGuy();
  opponent -> set_moves();
  Attack* newattack = new NormalAttackStrategy(user);
  user -> set_attack(newattack);
  user -> attack(opponent);
  EXPECT_EQ(opponent->getHealth(), 150);
}

TEST(AttackTEST, NormalEvsF) {
  Guy* user = new ElectricGuy();
  user -> set_moves();
  Guy* opponent = new FireGuy();
  opponent -> set_moves();
  Attack* newattack = new NormalAttackStrategy(user);
  user -> set_attack(newattack);
  user -> attack(opponent);
  EXPECT_EQ(opponent->getHealth(), 150);
}

TEST(AttackTEST, NormalEvsW) {
  Guy* user = new ElectricGuy();
  user -> set_moves();
  Guy* opponent = new WaterGuy();
  opponent -> set_moves();
  Attack* newattack = new NormalAttackStrategy(user);
  user -> set_attack(newattack);
  user -> attack(opponent);
  EXPECT_EQ(opponent->getHealth(), 150);
}

TEST(AttackTEST, NormalEvsG) {
  Guy* user = new ElectricGuy();
  user -> set_moves();
  Guy* opponent = new GrassGuy();
  opponent -> set_moves();
  Attack* newattack = new NormalAttackStrategy(user);
  user -> set_attack(newattack);
  user -> attack(opponent);
  EXPECT_EQ(opponent->getHealth(), 150);
}

TEST(AttackTEST, NormalFvsE) {
  Guy* opponent = new ElectricGuy();
  opponent -> set_moves();
  Guy* user = new FireGuy();
  user -> set_moves();
  Attack* newattack = new NormalAttackStrategy(user);
  user -> set_attack(newattack);
  user -> attack(opponent);
  EXPECT_EQ(opponent->getHealth(), 150);
}

TEST(AttackTEST, NormalFvsF) {
  Guy* opponent = new FireGuy();
  opponent -> set_moves();
  Guy* user = new FireGuy();
  user -> set_moves();
  Attack* newattack = new NormalAttackStrategy(user);
  user -> set_attack(newattack);
  user -> attack(opponent);
  EXPECT_EQ(opponent->getHealth(), 150);
}

TEST(AttackTEST, NormalFvsW) {
  Guy* opponent = new WaterGuy();
  opponent -> set_moves();
  Guy* user = new FireGuy();
  user -> set_moves();
  Attack* newattack = new NormalAttackStrategy(user);
  user -> set_attack(newattack);
  user -> attack(opponent);
  EXPECT_EQ(opponent->getHealth(), 150);
}

TEST(AttackTEST, NormalFvsG) {
  Guy* user = new FireGuy();
  user -> set_moves();
  Guy* opponent = new GrassGuy();
  opponent -> set_moves();
  Attack* newattack = new NormalAttackStrategy(user);
  user -> set_attack(newattack);
  user -> attack(opponent);
  EXPECT_EQ(opponent->getHealth(), 150);
}

TEST(AttackTEST, NormalWvsE) {
  Guy* user = new WaterGuy();
  user -> set_moves();
  Guy* opponent = new ElectricGuy();
  opponent -> set_moves();
  Attack* newattack = new NormalAttackStrategy(user);
  user -> set_attack(newattack);
  user -> attack(opponent);
  EXPECT_EQ(opponent->getHealth(), 150);
}

TEST(AttackTEST, NormalWvsF) {
  Guy* user = new WaterGuy();
  user -> set_moves();
  Guy* opponent = new FireGuy();
  opponent -> set_moves();
  Attack* newattack = new NormalAttackStrategy(user);
  user -> set_attack(newattack);
  user -> attack(opponent);
  EXPECT_EQ(opponent->getHealth(), 150);
}

TEST(AttackTEST, NormalWvsW) {
  Guy* user = new WaterGuy();
  user -> set_moves();
  Guy* opponent = new WaterGuy();
  opponent -> set_moves();
  Attack* newattack = new NormalAttackStrategy(user);
  user -> set_attack(newattack);
  user -> attack(opponent);
  EXPECT_EQ(opponent->getHealth(), 150);
}

TEST(AttackTEST, NormalWvsG) {
  Guy* user = new WaterGuy();
  user -> set_moves();
  Guy* opponent = new GrassGuy();
  opponent -> set_moves();
  Attack* newattack = new NormalAttackStrategy(user);
  user -> set_attack(newattack);
  user -> attack(opponent);
  EXPECT_EQ(opponent->getHealth(), 150);
}

TEST(AttackTEST, NormalGvsE) {
  Guy* user = new GrassGuy();
  user -> set_moves();
  Guy* opponent = new ElectricGuy();
  opponent -> set_moves();
  Attack* newattack = new NormalAttackStrategy(user);
  user -> set_attack(newattack);
  user -> attack(opponent);
  EXPECT_EQ(opponent->getHealth(), 150);
}

TEST(AttackTEST, NormalGvsF) {
  Guy* user = new GrassGuy();
  user -> set_moves();
  Guy* opponent = new FireGuy();
  opponent -> set_moves();
  Attack* newattack = new NormalAttackStrategy(user);
  user -> set_attack(newattack);
  user -> attack(opponent);
  EXPECT_EQ(opponent->getHealth(), 150);
}

TEST(AttackTEST, NormalGvsW) {
  Guy* user = new GrassGuy();
  user -> set_moves();
  Guy* opponent = new WaterGuy();
  opponent -> set_moves();
  Attack* newattack = new NormalAttackStrategy(user);
  user -> set_attack(newattack);
  user -> attack(opponent);
  EXPECT_EQ(opponent->getHealth(), 150);
}

TEST(AttackTEST, NormalGvsG) {
  Guy* user = new GrassGuy();
  user -> set_moves();
  Guy* opponent = new GrassGuy();
  opponent -> set_moves();
  Attack* newattack = new NormalAttackStrategy(user);
  user -> set_attack(newattack);
  user -> attack(opponent);
  EXPECT_EQ(opponent->getHealth(), 150);
}


TEST(AttackTEST, DoubleEvsE) {
  Guy* user = new ElectricGuy();
  user -> set_moves();
  Guy* opponent = new ElectricGuy();
  opponent -> set_moves();

  Attack* newAttackUser1 = new TypedAttackStrategy(user);
  user -> set_attack(newAttackUser1);
  user -> attack(opponent);

  Attack* newAttackOpponent1 = new TypedAttackStrategy(opponent);
  opponent -> set_attack(newAttackOpponent1);
  opponent -> attack(user);

  Attack* newAttackUser2 = new NormalAttackStrategy(user);
  user -> set_attack(newAttackUser2);
  user -> attack(opponent);

  Attack* newAttackOpponent2 = new NormalAttackStrategy(opponent);
  opponent -> set_attack(newAttackOpponent2);
  opponent -> attack(user);

  EXPECT_EQ(opponent->getHealth(), 120);
  EXPECT_EQ(user->getHealth(), 120);
}

TEST(AttackTEST, DoubleEvsF) {
  Guy* user = new ElectricGuy();
  user -> set_moves();
  Guy* opponent = new FireGuy();
  opponent -> set_moves();

  Attack* newAttackUser1 = new TypedAttackStrategy(user);
  user -> set_attack(newAttackUser1);
  user -> attack(opponent);

  Attack* newAttackOpponent1 = new TypedAttackStrategy(opponent);
  opponent -> set_attack(newAttackOpponent1);
  opponent -> attack(user);

  Attack* newAttackUser2 = new NormalAttackStrategy(user);
  user -> set_attack(newAttackUser2);
  user -> attack(opponent);

  Attack* newAttackOpponent2 = new NormalAttackStrategy(opponent);
  opponent -> set_attack(newAttackOpponent2);
  opponent -> attack(user);

  EXPECT_EQ(opponent->getHealth(), 120);
  EXPECT_EQ(user->getHealth(), 120);
}

TEST(AttackTEST, DoubleEvsW) {
  Guy* user = new ElectricGuy();
  user -> set_moves();
  Guy* opponent = new WaterGuy();
  opponent -> set_moves();

  Attack* newAttackUser1 = new TypedAttackStrategy(user);
  user -> set_attack(newAttackUser1);
  user -> attack(opponent);

  Attack* newAttackOpponent1 = new TypedAttackStrategy(opponent);
  opponent -> set_attack(newAttackOpponent1);
  opponent -> attack(user);

  Attack* newAttackUser2 = new NormalAttackStrategy(user);
  user -> set_attack(newAttackUser2);
  user -> attack(opponent);

  Attack* newAttackOpponent2 = new NormalAttackStrategy(opponent);
  opponent -> set_attack(newAttackOpponent2);
  opponent -> attack(user);

  EXPECT_EQ(opponent->getHealth(), 90);
  EXPECT_EQ(user->getHealth(), 120);
}

TEST(AttackTEST, DoubleEvsG) {
  Guy* user = new ElectricGuy();
  user -> set_moves();
  Guy* opponent = new GrassGuy();
  opponent -> set_moves();

  Attack* newAttackUser1 = new TypedAttackStrategy(user);
  user -> set_attack(newAttackUser1);
  user -> attack(opponent);

  Attack* newAttackOpponent1 = new TypedAttackStrategy(opponent);
  opponent -> set_attack(newAttackOpponent1);
  opponent -> attack(user);

  Attack* newAttackUser2 = new NormalAttackStrategy(user);
  user -> set_attack(newAttackUser2);
  user -> attack(opponent);

  Attack* newAttackOpponent2 = new NormalAttackStrategy(opponent);
  opponent -> set_attack(newAttackOpponent2);
  opponent -> attack(user);

  EXPECT_EQ(opponent->getHealth(), 120);
  EXPECT_EQ(user->getHealth(), 90);
}

TEST(AttackTEST, DoubleFvsE) {
  Guy* user = new FireGuy();
  user -> set_moves();
  Guy* opponent = new ElectricGuy();
  opponent -> set_moves();

  Attack* newAttackUser1 = new TypedAttackStrategy(user);
  user -> set_attack(newAttackUser1);
  user -> attack(opponent);

  Attack* newAttackOpponent1 = new TypedAttackStrategy(opponent);
  opponent -> set_attack(newAttackOpponent1);
  opponent -> attack(user);

  Attack* newAttackUser2 = new NormalAttackStrategy(user);
  user -> set_attack(newAttackUser2);
  user -> attack(opponent);

  Attack* newAttackOpponent2 = new NormalAttackStrategy(opponent);
  opponent -> set_attack(newAttackOpponent2);
  opponent -> attack(user);

  EXPECT_EQ(opponent->getHealth(), 120);
  EXPECT_EQ(user->getHealth(), 120);
}

TEST(AttackTEST, DoubleFvsF) {
  Guy* user = new FireGuy();
  user -> set_moves();
  Guy* opponent = new FireGuy();
  opponent -> set_moves();

  Attack* newAttackUser1 = new TypedAttackStrategy(user);
  user -> set_attack(newAttackUser1);
  user -> attack(opponent);

  Attack* newAttackOpponent1 = new TypedAttackStrategy(opponent);
  opponent -> set_attack(newAttackOpponent1);
  opponent -> attack(user);

  Attack* newAttackUser2 = new NormalAttackStrategy(user);
  user -> set_attack(newAttackUser2);
  user -> attack(opponent);

  Attack* newAttackOpponent2 = new NormalAttackStrategy(opponent);
  opponent -> set_attack(newAttackOpponent2);
  opponent -> attack(user);

  EXPECT_EQ(opponent->getHealth(), 120);
  EXPECT_EQ(user->getHealth(), 120);
}

TEST(AttackTEST, DoubleFvsW) {
  Guy* user = new FireGuy();
  user -> set_moves();
  Guy* opponent = new WaterGuy();
  opponent -> set_moves();

  Attack* newAttackUser1 = new TypedAttackStrategy(user);
  user -> set_attack(newAttackUser1);
  user -> attack(opponent);

  Attack* newAttackOpponent1 = new TypedAttackStrategy(opponent);
  opponent -> set_attack(newAttackOpponent1);
  opponent -> attack(user);

  Attack* newAttackUser2 = new NormalAttackStrategy(user);
  user -> set_attack(newAttackUser2);
  user -> attack(opponent);

  Attack* newAttackOpponent2 = new NormalAttackStrategy(opponent);
  opponent -> set_attack(newAttackOpponent2);
  opponent -> attack(user);

  EXPECT_EQ(opponent->getHealth(), 120);
  EXPECT_EQ(user->getHealth(), 90);
}

TEST(AttackTEST, DoubleFvsG) {
  Guy* user = new FireGuy();
  user -> set_moves();
  Guy* opponent = new GrassGuy();
  opponent -> set_moves();

  Attack* newAttackUser1 = new TypedAttackStrategy(user);
  user -> set_attack(newAttackUser1);
  user -> attack(opponent);

  Attack* newAttackOpponent1 = new TypedAttackStrategy(opponent);
  opponent -> set_attack(newAttackOpponent1);
  opponent -> attack(user);

  Attack* newAttackUser2 = new NormalAttackStrategy(user);
  user -> set_attack(newAttackUser2);
  user -> attack(opponent);

  Attack* newAttackOpponent2 = new NormalAttackStrategy(opponent);
  opponent -> set_attack(newAttackOpponent2);
  opponent -> attack(user);

  EXPECT_EQ(opponent->getHealth(), 90);
  EXPECT_EQ(user->getHealth(), 120);
}

TEST(AttackTEST, DoubleWvsE) {
  Guy* user = new WaterGuy();
  user -> set_moves();
  Guy* opponent = new ElectricGuy();
  opponent -> set_moves();

  Attack* newAttackUser1 = new TypedAttackStrategy(user);
  user -> set_attack(newAttackUser1);
  user -> attack(opponent);

  Attack* newAttackOpponent1 = new TypedAttackStrategy(opponent);
  opponent -> set_attack(newAttackOpponent1);
  opponent -> attack(user);

  Attack* newAttackUser2 = new NormalAttackStrategy(user);
  user -> set_attack(newAttackUser2);
  user -> attack(opponent);

  Attack* newAttackOpponent2 = new NormalAttackStrategy(opponent);
  opponent -> set_attack(newAttackOpponent2);
  opponent -> attack(user);

  EXPECT_EQ(opponent->getHealth(), 120);
  EXPECT_EQ(user->getHealth(), 90);
}

TEST(AttackTEST, DoubleWvsF) {
  Guy* user = new WaterGuy();
  user -> set_moves();
  Guy* opponent = new FireGuy();
  opponent -> set_moves();

  Attack* newAttackUser1 = new TypedAttackStrategy(user);
  user -> set_attack(newAttackUser1);
  user -> attack(opponent);

  Attack* newAttackOpponent1 = new TypedAttackStrategy(opponent);
  opponent -> set_attack(newAttackOpponent1);
  opponent -> attack(user);

  Attack* newAttackUser2 = new NormalAttackStrategy(user);
  user -> set_attack(newAttackUser2);
  user -> attack(opponent);

  Attack* newAttackOpponent2 = new NormalAttackStrategy(opponent);
  opponent -> set_attack(newAttackOpponent2);
  opponent -> attack(user);

  EXPECT_EQ(opponent->getHealth(), 90);
  EXPECT_EQ(user->getHealth(), 120);
}

TEST(AttackTEST, DoubleWvsW) {
  Guy* user = new WaterGuy();
  user -> set_moves();
  Guy* opponent = new WaterGuy();
  opponent -> set_moves();

  Attack* newAttackUser1 = new TypedAttackStrategy(user);
  user -> set_attack(newAttackUser1);
  user -> attack(opponent);

  Attack* newAttackOpponent1 = new TypedAttackStrategy(opponent);
  opponent -> set_attack(newAttackOpponent1);
  opponent -> attack(user);

  Attack* newAttackUser2 = new NormalAttackStrategy(user);
  user -> set_attack(newAttackUser2);
  user -> attack(opponent);

  Attack* newAttackOpponent2 = new NormalAttackStrategy(opponent);
  opponent -> set_attack(newAttackOpponent2);
  opponent -> attack(user);

  EXPECT_EQ(opponent->getHealth(), 120);
  EXPECT_EQ(user->getHealth(), 120);
}

TEST(AttackTEST, DoubleWvsG) {
  Guy* user = new WaterGuy();
  user -> set_moves();
  Guy* opponent = new GrassGuy();
  opponent -> set_moves();

  Attack* newAttackUser1 = new TypedAttackStrategy(user);
  user -> set_attack(newAttackUser1);
  user -> attack(opponent);

  Attack* newAttackOpponent1 = new TypedAttackStrategy(opponent);
  opponent -> set_attack(newAttackOpponent1);
  opponent -> attack(user);

  Attack* newAttackUser2 = new NormalAttackStrategy(user);
  user -> set_attack(newAttackUser2);
  user -> attack(opponent);

  Attack* newAttackOpponent2 = new NormalAttackStrategy(opponent);
  opponent -> set_attack(newAttackOpponent2);
  opponent -> attack(user);

  EXPECT_EQ(opponent->getHealth(), 120);
  EXPECT_EQ(user->getHealth(), 120);
}

TEST(AttackTEST, DoubleGvsE) {
  Guy* user = new GrassGuy();
  user -> set_moves();
  Guy* opponent = new ElectricGuy();
  opponent -> set_moves();

  Attack* newAttackUser1 = new TypedAttackStrategy(user);
  user -> set_attack(newAttackUser1);
  user -> attack(opponent);

  Attack* newAttackOpponent1 = new TypedAttackStrategy(opponent);
  opponent -> set_attack(newAttackOpponent1);
  opponent -> attack(user);

  Attack* newAttackUser2 = new NormalAttackStrategy(user);
  user -> set_attack(newAttackUser2);
  user -> attack(opponent);

  Attack* newAttackOpponent2 = new NormalAttackStrategy(opponent);
  opponent -> set_attack(newAttackOpponent2);
  opponent -> attack(user);

  EXPECT_EQ(opponent->getHealth(), 90);
  EXPECT_EQ(user->getHealth(), 120);
}

TEST(AttackTEST, DoubleGvsF) {
  Guy* user = new GrassGuy();
  user -> set_moves();
  Guy* opponent = new FireGuy();
  opponent -> set_moves();

  Attack* newAttackUser1 = new TypedAttackStrategy(user);
  user -> set_attack(newAttackUser1);
  user -> attack(opponent);

  Attack* newAttackOpponent1 = new TypedAttackStrategy(opponent);
  opponent -> set_attack(newAttackOpponent1);
  opponent -> attack(user);

  Attack* newAttackUser2 = new NormalAttackStrategy(user);
  user -> set_attack(newAttackUser2);
  user -> attack(opponent);

  Attack* newAttackOpponent2 = new NormalAttackStrategy(opponent);
  opponent -> set_attack(newAttackOpponent2);
  opponent -> attack(user);

  EXPECT_EQ(opponent->getHealth(), 120);
  EXPECT_EQ(user->getHealth(), 90);
}

TEST(AttackTEST, DoubleGvsW) {
  Guy* user = new GrassGuy();
  user -> set_moves();
  Guy* opponent = new WaterGuy();
  opponent -> set_moves();

  Attack* newAttackUser1 = new TypedAttackStrategy(user);
  user -> set_attack(newAttackUser1);
  user -> attack(opponent);

  Attack* newAttackOpponent1 = new TypedAttackStrategy(opponent);
  opponent -> set_attack(newAttackOpponent1);
  opponent -> attack(user);

  Attack* newAttackUser2 = new NormalAttackStrategy(user);
  user -> set_attack(newAttackUser2);
  user -> attack(opponent);

  Attack* newAttackOpponent2 = new NormalAttackStrategy(opponent);
  opponent -> set_attack(newAttackOpponent2);
  opponent -> attack(user);

  EXPECT_EQ(opponent->getHealth(), 120);
  EXPECT_EQ(user->getHealth(), 120);
}

TEST(AttackTEST, DoubleGvsG) {
  Guy* user = new GrassGuy();
  user -> set_moves();
  Guy* opponent = new GrassGuy();
  opponent -> set_moves();

  Attack* newAttackUser1 = new TypedAttackStrategy(user);
  user -> set_attack(newAttackUser1);
  user -> attack(opponent);

  Attack* newAttackOpponent1 = new TypedAttackStrategy(opponent);
  opponent -> set_attack(newAttackOpponent1);
  opponent -> attack(user);

  Attack* newAttackUser2 = new NormalAttackStrategy(user);
  user -> set_attack(newAttackUser2);
  user -> attack(opponent);

  Attack* newAttackOpponent2 = new NormalAttackStrategy(opponent);
  opponent -> set_attack(newAttackOpponent2);
  opponent -> attack(user);

  EXPECT_EQ(opponent->getHealth(), 120);
  EXPECT_EQ(user->getHealth(), 120);
}




TEST(AttackTEST, FightWvsF) {
  Guy* user = new WaterGuy();
  user -> set_moves();
  Guy* opponent = new FireGuy();
  opponent -> set_moves();

  Attack* newAttackUser1 = new TypedAttackStrategy(user);
  user -> set_attack(newAttackUser1);
  user -> attack(opponent);

  Attack* newAttackOpponent1 = new TypedAttackStrategy(opponent);
  opponent -> set_attack(newAttackOpponent1);
  opponent -> attack(user);

  Attack* newAttackUser2 = new NormalAttackStrategy(user);
  user -> set_attack(newAttackUser2);
  user -> attack(opponent);

  Attack* newAttackOpponent2 = new NormalAttackStrategy(opponent);
  opponent -> set_attack(newAttackOpponent2);
  opponent -> attack(user);

  Attack* newAttackUser3 = new TypedAttackStrategy(user);
  user -> set_attack(newAttackUser3);
  user -> attack(opponent);

  Attack* newAttackOpponent3 = new TypedAttackStrategy(opponent);
  opponent -> set_attack(newAttackOpponent3);
  opponent -> attack(user);

  Attack* newAttackUser4 = new NormalAttackStrategy(user);
  user -> set_attack(newAttackUser4);
  user -> attack(opponent);

  EXPECT_EQ(opponent->getHealth(), 0);
  EXPECT_EQ(opponent->is_alive(), false);
  EXPECT_EQ(user->getHealth(), 90);
  EXPECT_EQ(user->is_alive(), true);
}

TEST(AttackTEST, FightEvsE) {
  Guy* user = new ElectricGuy();
  user -> set_moves();
  Guy* opponent = new ElectricGuy();
  opponent -> set_moves();

  Attack* newAttackUser1 = new NormalAttackStrategy(user);
  user -> set_attack(newAttackUser1);
  user -> attack(opponent);

  Attack* newAttackOpponent1 = new NormalAttackStrategy(opponent);
  opponent -> set_attack(newAttackOpponent1);
  opponent -> attack(user);

  Attack* newAttackUser2 = new NormalAttackStrategy(user);
  user -> set_attack(newAttackUser2);
  user -> attack(opponent);

  Attack* newAttackOpponent2 = new NormalAttackStrategy(opponent);
  opponent -> set_attack(newAttackOpponent2);
  opponent -> attack(user);

  Attack* newAttackUser3 = new NormalAttackStrategy(user);
  user -> set_attack(newAttackUser3);
  user -> attack(opponent);

  Attack* newAttackOpponent3 = new NormalAttackStrategy(opponent);
  opponent -> set_attack(newAttackOpponent3);
  opponent -> attack(user);

  Attack* newAttackUser4 = new NormalAttackStrategy(user);
  user -> set_attack(newAttackUser4);
  user -> attack(opponent);


  EXPECT_EQ(opponent->getHealth(), 0);
  EXPECT_EQ(opponent->is_alive(), false);
  EXPECT_EQ(user->getHealth(), 50);
  EXPECT_EQ(user->is_alive(), true);
}
TEST(ElectricAttackDamage, Neutral){
	Guy* test = new ElectricGuy();
	Guy* test1 = new WaterGuy();
	test->set_moves();
	test1->set_moves();
	Attack* neutral = new NormalAttackStrategy(test);
	test->set_attack(neutral);
	test->attack(test1);
	EXPECT_EQ(test->getAttack()->getDamage()->evaluate(), 50);
}
TEST(ElectricAttackDamage, Typed) {
	Guy* test = new ElectricGuy();
        Guy* test1 = new WaterGuy();
        test->set_moves();
        test1->set_moves();
        Attack* typed = new TypedAttackStrategy(test);
	test->set_attack(typed);
	test->attack(test1);
        EXPECT_EQ(test->getAttack()->getDamage()->evaluate(), 60);
}
TEST(FireAttackDamage, Neutral){
        Guy* test = new FireGuy();
        Guy* test1 = new WaterGuy();
        test->set_moves();
        test1->set_moves();
        Attack* neutral = new NormalAttackStrategy(test);
        test->set_attack(neutral);
        test->attack(test1);
        EXPECT_EQ(test->getAttack()->getDamage()->evaluate(), 50);
}
TEST(FireAttackDamage, Typed) {
        Guy* test = new FireGuy();
        Guy* test1 = new GrassGuy();
        test->set_moves();
        test1->set_moves();
        Attack* typed = new TypedAttackStrategy(test);
        test->set_attack(typed);
        test->attack(test1);
        EXPECT_EQ(test->getAttack()->getDamage()->evaluate(), 60);
}
TEST(WaterAttackDamage, Neutral){
        Guy* test = new WaterGuy();
        Guy* test1 = new WaterGuy();
        test->set_moves();
        test1->set_moves();
        Attack* neutral = new NormalAttackStrategy(test);
        test->set_attack(neutral);
        test->attack(test1);
        EXPECT_EQ(test->getAttack()->getDamage()->evaluate(), 50);
}
TEST(WaterAttackDamage, Typed) {
        Guy* test = new WaterGuy();
        Guy* test1 = new WaterGuy();
        test->set_moves();
        test1->set_moves();
        Attack* typed = new TypedAttackStrategy(test);
        test->set_attack(typed);
        test->attack(test1);
        EXPECT_EQ(test->getAttack()->getDamage()->evaluate(), 30);
}
TEST(GrassAttackDamage, Neutral){
        Guy* test = new GrassGuy();
        Guy* test1 = new WaterGuy();
        test->set_moves();
        test1->set_moves();
        Attack* neutral = new NormalAttackStrategy(test);
        test->set_attack(neutral);
        test->attack(test1);
        EXPECT_EQ(test->getAttack()->getDamage()->evaluate(), 50);
}
TEST(GrassAttackDamage, Typed) {
        Guy* test = new GrassGuy();
        Guy* test1 = new WaterGuy();
        test->set_moves();
        test1->set_moves();
        Attack* typed = new TypedAttackStrategy(test);
        test->set_attack(typed);
        test->attack(test1);
        EXPECT_EQ(test->getAttack()->getDamage()->evaluate(), 30);
}
#endif
