#include"Bank.h"
#include<iostream>


void Bank::reg(string name, string password)
{
	deposit = 0;
	customer_name = name;
	customer_password = password;
}

void Bank::load(int num)
{
	if (deposit - num > 0)
	{
		deposit -= num;
	}
	else
	{
		std::cout << "对不起，您的余额不足。\n";
	}
}

void Bank::save(int num)
{
	deposit += num;
}

void Bank::show()
{
	std::cout << deposit;
}
