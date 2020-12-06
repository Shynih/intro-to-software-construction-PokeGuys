#ifndef __BASE_TEST_HPP__
#define __BASE_TEST_HPP__

#include "gtest/gtest.h"
#include "../Base/mult.hpp"
#include "../Base/op.hpp"
#include "../Base/add.hpp"
#include "../Base/sub.hpp"

TEST(MultTEST, TwoMultFive) {
	Base* two = new Op(2);
	Base* five = new Op(5);
	Base* test = new Mult(two, five);
	EXPECT_EQ(test->evaluate(), 10);
}

TEST(MultTEST, TwoMultZero) {
	Base* two = new Op(2);
	Base* zero = new Op(0);
	Base* test = new Mult(two, zero);
	EXPECT_EQ(test->evaluate(), 0);
}

TEST(MultTEST, MultNegative) {
	Base* three = new Op(3);
	Base* negTen = new Op(-10);
	Base* test = new Mult(three, negTen);
	EXPECT_EQ(test->evaluate(), -30);
}

TEST(MultTEST, MultStringify) {
	Base * one = new Op(1);
	Base* two = new Op(2);
	Base* test = new Mult(one, two);
	EXPECT_EQ(test->stringify(), "1.0 * 2.0");
}

TEST(AddTEST, TwoPlusFive) {
	Base* two = new Op(2);
	Base* five = new Op(5);
	Base* test = new Add(two, five);
	EXPECT_EQ(test->evaluate(), 7);
}

TEST(AddTEST, ZeroPlusZero) {
	Base* zero1 = new Op(0);
	Base* zero2 = new Op(0);
	Base* test = new Add(zero1, zero2);
	EXPECT_EQ(test->evaluate(), 0);
}

TEST(AddTEST, PlusNegative) {
	Base* three = new Op(3);
	Base* negTen = new Op(-10);
	Base* test = new Add(three, negTen);
	EXPECT_EQ(test->evaluate(), -7);
}

TEST(AddTEST, AddStringify) {
	Base* one = new Op(1);
	Base* two = new Op(2);
	Base* test = new Add(one, two);
	EXPECT_EQ(test->stringify(), "1.0 + 2.0");
}

TEST(SubTEST, TwoMinusFive) {
	Base* two = new Op(2);
	Base* five = new Op(5);
	Base* test = new Sub(two, five);
	EXPECT_EQ(test->evaluate(), -3);
}

TEST(SubTEST, ZeroMinusZero) {
	Base* zero1 = new Op(0);
	Base* zero2 = new Op(0);
	Base* test = new Sub(zero1, zero2);
	EXPECT_EQ(test->evaluate(), 0);
}

TEST(SubTEST, MinusNegative) {
	Base* three = new Op(3);
	Base* negTen = new Op(-10);
	Base* test = new Sub(three, negTen);
	EXPECT_EQ(test->evaluate(), 13);
}

TEST(SubTEST, SubStringify) {
	Base* one = new Op(1);
	Base* two = new Op(2);
	Base* test = new Sub(one, two);
	EXPECT_EQ(test -> stringify(), "1.0 - 2.0");
}

#endif
