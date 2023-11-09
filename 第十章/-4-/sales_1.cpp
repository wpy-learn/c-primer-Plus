#include"sales.h"
#include<iostream>

int main()
{
	sales ann;
	sales::Sales ann_1;
	double num[4] = { 13,22,4,24 };
	ann.setSales(ann_1, num, 4);
	sales::Sales ann_2;
	double num_1[5] = { 24,12,15,3,52 };
	ann.setSales(ann_2, num_1, 5);
	sales::Sales ann_3;
	ann.setSales(ann_3);

	ann.showSales(ann_1);
	ann.showSales(ann_2);
	ann.showSales(ann_3);
}
