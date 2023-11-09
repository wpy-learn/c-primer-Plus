#pragma once
#ifndef GOLF_H
#define GOLF_H
#include<iostream>



class Golf
{
private:
	static const int Len = 40;
public:
	
	struct golf
	{
		char fullname[Len];
		int handicap;
	};
	void setgolf(golf& g, const char* name, int hc);
	int setgolf(golf& g);
	void handicap(golf& g, int hc);
	void showgolf(const golf& g);
	~Golf();
};

void Golf::setgolf(golf& g, const char* name, int hc)//若代码直接补全姓名和等级，则用这个构造函数
{
	g.fullname[Len] = *name;
	g.handicap = hc;
}

int Golf::setgolf(golf& g)//若让用户输入，则用这个构造函数
{
	using std::cin;
	using std::cout;
	char name[Len];
	int hc;
	cout << "请输入姓名：";
	cin >> name;
	if (cin.get() == NULL)
	{
		return 0;
	}
	else
	{
		g.fullname[Len] = name[Len];
		cout << "请输入等级：";
		cin >> hc;
		g.handicap = hc;
		return 1;
	}
}

void Golf::handicap(golf& g, int hc)//更改等级
{
	g.handicap = hc;
}

void Golf::showgolf(const golf& g)//显示等级
{
	std::cout << "您的等级是：" << g.handicap;
}

Golf::~Golf()
{
}
#endif // !GOLF_H

