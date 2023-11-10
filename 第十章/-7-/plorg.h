#pragma once
#ifndef PLORG_H
#define PLORG_H
#include<string>

static const int MAX = 19;//用于名称限制
using std::string;
class Plorg
{
public:
	void plorg();
	void plorg(string nam);
	void UpdateCI(int num);
	void Show();
	~Plorg();

private:
	int CI = 50;
	string name;
};


#endif // !PLORG_H
