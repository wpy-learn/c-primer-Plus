#pragma once
#ifndef BANK_H
#define BANK_H
#include<string>

using std::string;
class Bank
{
public:
	void reg(string name, string password);//注册函数
	void save(int num);//存钱
	void load(int num);//取钱
	void show();

private:
	string customer_name;
	string customer_password;
	int deposit;
};


#endif // !BANK_H

