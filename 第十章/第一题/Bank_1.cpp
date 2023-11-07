#include"Bank.h"
#include<iostream>

int main()
{
	Bank customer;
	using std::cin;
	using std::cout;
	string name;
	string password;
	int num;
	cout << "请输入注册人姓名：";
	cin >> name;
	cout << "请输入密码：";
	cin >> password;
	customer.reg(name, password);
	cout << "当前余额为";
	customer.show();
	cout << "元。请选择存钱或者取钱: " << std::endl;
	cout << "(输入s存钱，输入l取钱，输入q退出)";
	char a;
	while (cin>>a && toupper(a)!='Q')
	{
		switch (a)
		{
		default:
			cout << "对不起，无法识别，请按照上面提示输入" << std::endl;
			break;
		case 's':
		case 'S':
			cout << "请输入存钱数目：";
			cin >> num;
			customer.save(num);
			break;
		case'l':
		case'L':
			cout << "请输入取钱数目：";
			cin >> num;
			customer.load(num);
			break;
		}
		cout << "当前余额为";
		customer.show();
		cout << "元。请选择存钱或者取钱: " << std::endl << std::endl;
		cout << "请输入:（s:存钱，l:取钱, q:退出）  ";
	}
	cout << "退出成功，祝您生活愉快" << "\a\a\a";
	return 0;
}
