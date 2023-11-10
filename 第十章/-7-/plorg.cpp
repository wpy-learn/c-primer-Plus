#include"plorg.h"
#include<iostream>

void Plorg::plorg()
{
	name = "Plorga";
}

void Plorg::plorg(string nam)
{
	name = nam;
}

void Plorg::UpdateCI(int num)
{
	CI = num;
}

void Plorg::Show()
{
	std::cout << "PL组织名：" << name << "\n等级：" << CI << "\n";
}

Plorg::~Plorg()
{
}
