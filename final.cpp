#include <iostream>
using namespace std;

class base
{
public:
	int const final = 0; //normal variale
public:
	 virtual void foo()
	{
		cout << "baseclass";

	}
};

class derived :public base
{
public:
	void foo() final
	{
		cout << "derived claass" << endl;
	 }
};

class derived2 final :public derived
{
public:
	void foo() override // cannot override already final finction
	{
		cout << "derived2 claass" << endl;
	}
};

class d3 : public derived2 {}; //cannot inherit final class




int main()
{
	base *p;
	derived d;
	p = &d;
	p->foo();

}
