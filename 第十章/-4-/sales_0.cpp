#include"sales.h"
#include<iostream>

void sales::setSales(Sales& s, const double ar[], int n)
{
	for (int i = 0; i < n; i++)
	{
		s.sales[i] = ar[i];
		s.average += s.sales[i];
	}
	s.average /= n;
	s.max = s.min = s.sales[0];
	for (int i = 1; i < n; i++)
	{
		if (s.sales[i] > s.max)
		{
			s.max = s.sales[i];
		}
		else if (s.sales[i] < s.min)
		{
			s.min = s.sales[i];
		}
		else
			continue;
	}
}

void sales::setSales(Sales& s)
{
	using std::cout;
	using std::cin;
	int n;
	cout << "请输入要写入的数字的数量：";
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		cin >> s.sales[i];
		s.average += s.sales[i];
	}
	s.average /= n;
	s.max = s.min = s.sales[0];
	for (int i = 1; i < n; i++)
	{
		if (s.sales[i] > s.max)
		{
			s.max = s.sales[i];
		}
		else if (s.sales[i] < s.min)
		{
			s.min = s.sales[i];
		}
		else
			continue;
	}
}

void sales::showSales(const Sales& s)
{
	std::cout << "平均数为：" << s.average << "\n最大数为：" << s.max << "\n 最小数为：" << s.min << "\n";
}
