#include "pch.h"
#include "gtest/gtest.h"
#include "ClassPalindrom.h"
#include "Roman2Integers.h"

TEST(TestCaseName, PalindromTest){
	const auto sut = new ClassPalindrom();
	sut->setTarget(15151);
	const bool res = sut->isPalindrom();
	EXPECT_TRUE(res);
}

TEST(TestCaseName, Roman2IntegerTest)
{
	std::string target = "CMCDIXIV";//2313
	EXPECT_EQ(Roman2Integers::convert(target),1313);
}