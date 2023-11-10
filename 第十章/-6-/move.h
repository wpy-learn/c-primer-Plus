#pragma once
#ifndef MOVE_H
#define MOVE_H
#include<iostream>

class Move
{
public:
	Move(double a = 0, double b = 0);
	void showmove() const;
	Move add(const Move& m) const;
	void reset(double a = 0, double b = 0);
	~Move();

private:
	double x;
	double y;
};

Move::Move(double a, double b)
{
	x = a;
	y = b;
}

void Move::showmove() const
{
	std::cout <<"x位移为："<<x<<",y位移为："<<y<<"\n";
}

void Move::reset(double a, double b)
{
	x = a;
	y = b;
}

Move::~Move()
{

}

Move Move::add(const Move& m) const
{
	Move n;
	n.x = m.x + x;
	n.y = m.y + y;
	return n;
}
#endif // !MOVE_H
