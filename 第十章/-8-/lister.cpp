#include"list.h"
#include<iostream>

using namespace std;
void show(Item& n);

int main()
{
	List test;
	List test_1(3);
	test_1.insert(3);
	test_1.insert(5);
	test.insert(2);
	test_1.visit(show);
}
void show(Item& n)
{
	cout << n << " ";
}
