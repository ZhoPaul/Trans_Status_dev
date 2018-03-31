/* 测试用例编写 */
#include <iostream>
#include <string>
#include <gtest/gtest.h>

#ifndef FileName_H_
#define FileName_H_
#include "GameRules.h"
#include "Test.h"

#endif

int main(int argc, char** argv)
{
	::testing::InitGoogleTest(&argc, argv);
	return RUN_ALL_TESTS();
}

/* S1迭代，测试1:1,3,5,7测试 */
TEST_F(myTest, test_S1_1)
{
	g1.SprintSwch = 1;
	ASSERT_EQ("1", g1.InputNum(1));
	ASSERT_EQ("石头", g1.InputNum(3));
	ASSERT_EQ("剪刀", g1.InputNum(5));
	ASSERT_EQ("布", g1.InputNum(7));
}

/* S1迭代，测试2:15,21，35,105测试 */
TEST_F(myTest, test_S1_2)
{
	g1.SprintSwch = 1;
	ASSERT_EQ("石头剪刀", g1.InputNum(15));
	ASSERT_EQ("石头布", g1.InputNum(21));
	ASSERT_EQ("剪刀布", g1.InputNum(35));
	ASSERT_EQ("石头剪刀布", g1.InputNum(105));
}

/* S2迭代，测试1:基础测试 */
TEST_F(myTest, test_S2)
{
	g1.SprintSwch = 2;
	ASSERT_EQ("1", g1.InputNum(1));
	ASSERT_EQ("石头", g1.InputNum(3));
	ASSERT_EQ("剪刀", g1.InputNum(5));
	ASSERT_EQ("布", g1.InputNum(7));

	ASSERT_EQ("石头", g1.InputNum(13));
	ASSERT_EQ("剪刀", g1.InputNum(15));
	ASSERT_EQ("布", g1.InputNum(72));
}
