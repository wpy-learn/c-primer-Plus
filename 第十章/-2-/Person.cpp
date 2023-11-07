#include<iostream>

class Person
{
public:
	Person();
	Person(const std::string& ln, const char* fn = "Heyyou");
	void Show() const;
	void FormalShow() const;
	~Person();

private:
	static const int LIMIT = 25;
	std::string lname;
	char fname[LIMIT];
};

int main()
{
	Person one;
	Person two("Smythecraft");
	Person three("Dimwiddy", "Sam");
	one.Show();
	std::cout << std::endl;
	one.FormalShow();
}

Person::Person()
{
	lname = ""; fname[0] = '\0';
}

Person::Person(const std::string& ln, const char* fn )
{
	lname = ln;
	fname[0] = *fn;
}

void Person::Show()const
{
	std::cout << lname;
}

void Person::FormalShow()const
{
	std::cout << fname;
}

Person::~Person()
{
}
