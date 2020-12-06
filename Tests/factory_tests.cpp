#include "gtest/gtest.h"
#include "../Factory/FireFactory.hpp"
#include "../Factory/WaterFactory.hpp"
#include "../Factory/GrassFactory.hpp"
#include "../Factory/ElectricFactory.hpp"

TEST(ElectricFactory, RamAttack) {
	MoveFactory* elecFac = new ElectricFactory();
	TypedAttack* typAtk = elecFac->createTypedMove();
	NeutralAttack* normAtk = elecFac->createNeutralMove();
	EXPECT_EQ(normAtk->get_damage(), 50);
	EXPECT_EQ(normAtk->get_type(), "normal");
}

TEST(ElectricFactory, ElectricAttack) {
        MoveFactory* elecFac = new ElectricFactory();
        TypedAttack* typAtk = elecFac->createTypedMove();
        NeutralAttack* normAtk = elecFac->createNeutralMove();
        EXPECT_EQ(typAtk->get_damage(), 30);
        EXPECT_EQ(typAtk->get_type(), "electric");
}

TEST(FireFactory, ClawAttack) {
        MoveFactory* fireFac = new FireFactory();
        TypedAttack* typAtk = fireFac->createTypedMove();
        NeutralAttack* normAtk = fireFac->createNeutralMove();
        EXPECT_EQ(normAtk->get_damage(), 50);
        EXPECT_EQ(normAtk->get_type(), "normal");
}

TEST(FireFactory, FireAttack) {
        MoveFactory* fireFac = new FireFactory();
        TypedAttack* typAtk = fireFac->createTypedMove();
        NeutralAttack* normAtk = fireFac->createNeutralMove();
        EXPECT_EQ(typAtk->get_damage(), 30);
        EXPECT_EQ(typAtk->get_type(), "fire");
}

TEST(GrassFactory, PunchAttack) {
        MoveFactory* grassFac = new GrassFactory();
        TypedAttack* typAtk = grassFac->createTypedMove();
        NeutralAttack* normAtk = grassFac->createNeutralMove();
        EXPECT_EQ(normAtk->get_damage(), 50);
        EXPECT_EQ(normAtk->get_type(), "normal");
}

TEST(GrassFactory, GrassAttack) {
        MoveFactory* grassFac = new GrassFactory();
        TypedAttack* typAtk = grassFac->createTypedMove();
        NeutralAttack* normAtk = grassFac->createNeutralMove();
        EXPECT_EQ(typAtk->get_damage(), 30);
        EXPECT_EQ(typAtk->get_type(), "grass");
}

TEST(WaterFactory, DropAttack) {
        MoveFactory* waterFac = new WaterFactory();
        TypedAttack* typAtk = waterFac->createTypedMove();
        NeutralAttack* normAtk = waterFac->createNeutralMove();
        EXPECT_EQ(normAtk->get_damage(), 50);
        EXPECT_EQ(normAtk->get_type(), "normal");
}

TEST(WaterFactory, WaterAttack) {
        MoveFactory* waterFac = new WaterFactory();
        TypedAttack* typAtk = waterFac->createTypedMove();
        NeutralAttack* normAtk = waterFac->createNeutralMove();
        EXPECT_EQ(typAtk->get_damage(), 30);
        EXPECT_EQ(typAtk->get_type(), "water");
}
