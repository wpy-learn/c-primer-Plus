#include<iostream>
#include<cctype>
#include"stack.h"
using namespace std;
int main()
{
	//using std::cout;
	int num = 0;
	Stack st;
	char ch;
	Item po;
	cout << "Please enter A to add a purchase order,\n"
		<< "P to process a PO, or Q to quit.\n";
	while (cin>>ch &&toupper(ch)!='Q')
	{
		while (cin.get() != '\n')
		{
			continue;
		}
		if (!isalpha(ch))
		{
			cout << '\a';
			continue;
		}
		switch (ch)
		{
		case 'A':
		case 'a':
			cout << "Enter a PO fullname: ";
			cin >> po.fullname;
			cout << "Enter a PO payment to add: ";
			cin >> po.payment;
			if (st.isfull())
			{
				cout << "stack already full\n";
			}
			else
				st.push(po);
			break;
		case 'P':
		case 'p':
			if (st.isempty())
			{
				cout << "stack already empty\n";
			}
			else
			{
				st.pop(po);
				num += po.payment;
				cout << "PO #" << po.fullname << " popped\n";
				cout << "Now the payments = " << num << endl;
			}
		}
		cout << "Please enter A to add a purchase order,\n"
			<< "P to process a PO, or Q to quit.\n";
	}
	cout << "Bye\n";
	return 0;
}
