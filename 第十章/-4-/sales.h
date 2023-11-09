#pragma once
#ifndef SALES_H
#define SALES_H

class sales
{
private:
	static const int QUARTERS = 4;
public:
	struct Sales
	{
		double sales[QUARTERS];
		double average = 0;
		double max;
		double min;
	};
	void setSales(Sales& s, const double ar[], int n = 4);
	void setSales(Sales& s);
	void showSales(const Sales& s);
};


#endif // !SALES_H
