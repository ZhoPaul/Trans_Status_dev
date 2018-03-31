
/* 定义游戏规则 */
#include <iostream>
#include <string>
#include <gtest/gtest.h>

using namespace std;

/*class CONVERT_NUM_TO_STRING
{
public:*/
	int IsTimes(const int Num);//返回是几的倍数


	string ConvertToString(const int InputNum, int times);
	string  DoubelConvertToString(const int InputNum);

	bool ConvertToString(const int InputNum, int times, string str);
	void DoubelConvertToString(const int InputNum, string str);
	//string ConvertToString(const int InputNum, int times);
	//string OutPutString(const int Num);
//};


class show
{
public:
	void showStartInfo()
	{
		cout<<"Begin Running Test!"<<endl;
	}

	void showEndInfo()
	{
		cout<<"Finished Running Test!"<<endl;
	}
};

class Game
{
public:
	Game():str(""),N(0),SprintSwch(0){}
	~Game(){}

	string InputNum(int num);
	void convertNumtoString();
	bool Istimes(int times);
	bool IncludeTheNum(int num);

	string str;
	int N;
	int SprintSwch;
};
