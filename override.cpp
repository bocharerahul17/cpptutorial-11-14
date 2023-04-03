#include <iostream>
using namespace std;

class base
{
public:
	virtual void foo()
	{
		cout << "baseclass";

	}
};

class derived :public base
{
public:
	void foo() override
	{
		cout << "derivedclaass" << endl;
	 }
};
class derived2 :public base
{
public:
	void foo() override
	{
		cout << "derived2 claass" << endl;
	}
};

//class derived3 :public base
//{
//public:
//	void foo(int ) override
//	{
//		cout << "derived3 claass" << endl;
//	}
//};


int main()
{
	derived d;
	d.foo();
	derived2 d2;
	d2.foo();


}
