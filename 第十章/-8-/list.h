#pragma once
#ifndef LIST_H
#define LIST_H

typedef unsigned long Item;
class List
{
public:
	List(int = 0);
	bool isempty() const;//判断是否为空
	bool isfull() const;//判断是否为满
	bool insert(Item item);//插入数据
	void visit(void (*pf)(Item&));
	~List();

private:
	enum{ MAX = 50 };
	Item items[MAX];
	int top;
};

#endif // !LIST_H
