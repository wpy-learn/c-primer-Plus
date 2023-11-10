#include"plorg.h"
#include<iostream>

using std::cin;
using std::cout;
int main()
{
	Plorg pl;
	Plorg PL;
	pl.plorg();
	PL.plorg("ANN");
	PL.UpdateCI(58);
	pl.Show();
	PL.Show();
}
