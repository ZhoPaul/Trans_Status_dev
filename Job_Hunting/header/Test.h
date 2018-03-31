#include <iostream>
#include <string>
#include <gtest/gtest.h>


#ifndef FileName_H_
#define FileName_H_
#include "GameRules.h"


#endif

using namespace std;

class myTest:public ::testing::Test
{
public:
	myTest(){}
	virtual ~myTest(){}
protected:
	virtual void SetUp()
	{
		cout<<"Begin Running Test!"<<endl;
	}
	virtual void TearDown()
	{
		cout<<"Finished Running Test!"<<endl;
	}

public:
	int min1(int a,int b);
	Game g1;
};
