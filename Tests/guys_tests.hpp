#ifndef GUYS_TESTS_HPP
#define GUYS_TESTS_HPP

#include "gtest/gtest.h"
#include "../guys/ElectricGuy.hpp"
#include "../guys/FireGuy.hpp"
#include "../guys/GrassGuy.hpp"
#include "../guys/WaterGuy.hpp"

TEST(getWeakness, ElectricGuy) {
    Guy* pikachu = new ElectricGuy();
    EXPECT_EQ(pikachu -> getWeakness(), "Grass");
}

TEST(getWeakness, WaterGuy) {
    Guy* squirtle = new WaterGuy();
    EXPECT_EQ(squirtle -> getWeakness(), "Electric");
}

TEST(getWeakness, FireGuy) {
    Guy* charmander = new FireGuy();
    EXPECT_EQ(charmander -> getWeakness(), "Water");
}

TEST(getWeakness, GrassGuy) {
    Guy* bulbasaur = new GrassGuy();
    EXPECT_EQ(bulbasaur -> getWeakness(), "Fire");
}

TEST(Status, ElectricGuy) {
    Guy* test = new ElectricGuy();
    EXPECT_EQ(test -> is_alive(), true);
}

TEST(Status, FireGuy) {
    Guy* test = new FireGuy();
    EXPECT_EQ(test -> is_alive(), true);
}

TEST(Status, WaterGuy) {
    Guy* test = new WaterGuy();
    EXPECT_EQ(test -> is_alive(), true);
}

TEST(Status, GrassGuy) {
    Guy* test = new GrassGuy();
    EXPECT_EQ(test -> is_alive(), true);
}

TEST(TypedAttackType, ElectricType) {
    Guy* test = new ElectricGuy();
    test -> set_moves();
    EXPECT_EQ(test -> getTypedAttack() -> get_type() , "electric");
    EXPECT_EQ(test -> getTypedAttack() -> get_damage() , 30);
}

TEST(TypedAttackType, WaterType) {
    Guy* test = new WaterGuy();
    test -> set_moves();
    EXPECT_EQ(test -> getTypedAttack() -> get_type() , "water");
    EXPECT_EQ(test -> getTypedAttack() -> get_damage() , 30);
}

TEST(TypedAttackType, GrassType) {
    Guy* test = new GrassGuy();
    test -> set_moves();
    EXPECT_EQ(test -> getTypedAttack() -> get_type() , "grass");
    EXPECT_EQ(test -> getTypedAttack() -> get_damage() , 30);
}

TEST(TypedAttackType, FireType) {
    Guy* test = new FireGuy();
    test -> set_moves();
    EXPECT_EQ(test -> getTypedAttack() -> get_type() , "fire");
    EXPECT_EQ(test -> getTypedAttack() -> get_damage() , 30);
}

TEST(NormalAttackTEST, ElectricTEST) {
    Guy* test = new ElectricGuy();
    test -> set_moves();
    EXPECT_EQ(test -> getNeutralAttack() -> get_type() , "normal");
    EXPECT_EQ(test -> getNeutralAttack() -> get_damage() , 50);
}
TEST(NormalAttackTEST, WaterTEST) {
    Guy* test = new WaterGuy();
    test -> set_moves();
    EXPECT_EQ(test -> getNeutralAttack() -> get_type() , "normal");
    EXPECT_EQ(test -> getNeutralAttack() -> get_damage() , 50);
}
TEST(NormalAttackTEST, GrassTEST) {
    Guy* test = new GrassGuy();
    test -> set_moves();
    EXPECT_EQ(test -> getNeutralAttack() -> get_type() , "normal");
    EXPECT_EQ(test -> getNeutralAttack() -> get_damage() , 50);
}
TEST(NormalAttackTEST, FireTEST) {
    Guy* test = new FireGuy();
    test -> set_moves();
    EXPECT_EQ(test -> getNeutralAttack() -> get_type() , "normal");
    EXPECT_EQ(test -> getNeutralAttack() -> get_damage() , 50);
}
TEST(ElectricNickname, SetterAndGetter) {
    Guy* test = new ElectricGuy();
    test->set_nickname("sparky");
    EXPECT_EQ(test->get_nickname(), "sparky");
}
TEST(FireNickname, SetterAndGetter) {
    Guy* test = new FireGuy();
    test->set_nickname("burny");
    EXPECT_EQ(test->get_nickname(), "burny");
}
TEST(GrassNickname, SetterAndGetter) {
    Guy* test = new GrassGuy();
    test->set_nickname("leafy");
    EXPECT_EQ(test->get_nickname(), "leafy");
}
TEST(WaterNickname, SetterAndGetter) {
    Guy* test = new WaterGuy();
    test->set_nickname("watery");
    EXPECT_EQ(test->get_nickname(), "watery");
}
TEST(ElectricAttacks, Neutral) {
    Guy* test = new ElectricGuy();
    EXPECT_EQ(test->get_neutral_atk_name(), "Ram");
}
TEST(FireAttacks, Neutral) {
    Guy* test = new FireGuy();
    EXPECT_EQ(test->get_neutral_atk_name(), "Scratch");
}
TEST(GrassAttacks, Neutral) {
    Guy* test = new GrassGuy();
    EXPECT_EQ(test->get_neutral_atk_name(), "Punch");
}
TEST(WaterAttacks, Neutral) {
    Guy* test = new WaterGuy();
    EXPECT_EQ(test->get_neutral_atk_name(), "Dropkick");
}
TEST(ElectricAttacks, Typed) {
    Guy* test = new ElectricGuy();
    EXPECT_EQ(test->get_typed_atk_name(), "Thunderbolt");
}
TEST(FireAttacks, Typed) {
    Guy* test = new FireGuy();
    EXPECT_EQ(test->get_typed_atk_name(), "Flamethrower");
}
TEST(GrassAttacks, Typed) {
    Guy* test = new GrassGuy();
    EXPECT_EQ(test->get_typed_atk_name(), "Leaf Blade");
}
TEST(WaterAttacks, Typed) {
    Guy* test = new WaterGuy();
    EXPECT_EQ(test->get_typed_atk_name(), "Hydro Blast");
}


#endif
