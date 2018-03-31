#include <iostream>

#include "GameRules.h"
#include "GameOfCounting.h"

int IsTimes(const int Num)
{
	if(0 == Num%3)
		 return 3;
	if(0 == Num%5)
		 return 5;
	if(0 == Num%7)
		 return 7;
	return 1;

}
string ConvertToString(const int InputNum, int times)
{
	string str;
	if (1 != times)
	{
		if(3 == times)
			str = "石头";
		if(5 == times)
			str = "剪刀";
		if(7 == times)
			str = "布";
		return str;
	}
		str = std::to_string(InputNum);
		return str;
}

string  DoubelConvertToString(const int InputNum)
{
	string str;
	if(1 != IsTimes(InputNum))
	{
		str = ConvertToString(InputNum, 3)+
			ConvertToString(InputNum, 5)+
			ConvertToString(InputNum, 7);
	return str;
	}
	return std::to_string(InputNum);
}

string Game :: InputNum(int num)
{
	N = num;
	if(Istimes(3) || Istimes(5) || Istimes(7))
	{
		convertNumtoString();
		return str;
	}

	if(IncludeTheNum(3) || IncludeTheNum(5) || IncludeTheNum(7))
	{
		convertNumtoString();
		return str;
	}
	str = std::to_string(N);
	return str;
}

bool Game ::Istimes(int times)
{
	if(0 == N%times)
	{
		return true;
	}

	return false;
}

bool Game :: IncludeTheNum(int num)
{
	if(num == N/10 || num == N%10)
	{
		return true;
	}
	return false;
}

void Game :: convertNumtoString()
{
	if(1 == SprintSwch)
	{
		str = "";
		if(0 == N%3)
		{
			str = "石头";
		}

		if(0 == N%5)
		{
			str = str+"剪刀";
		}

		if(0 == N%7)
		{
			str = str+"布";
		}
		return;
	}

	if(2 == SprintSwch)
	{
		str = "";
		if(IncludeTheNum(3))
		{
			str = "石头";
		}

		if(IncludeTheNum(5))
		{
			str = "剪刀";
		}

		if(IncludeTheNum(7))
		{
			str = "布";
		}
		return;
	}

}
