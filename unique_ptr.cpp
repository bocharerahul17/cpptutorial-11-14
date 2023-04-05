#include <iostream>
#include<memory>

using namespace std;

class test
{
public:
	int data;
public:
	test(int data) :data{data}
	  {
		cout << "Test constructor" << data << endl;

	  }
	~test()
	{
		cout << "Test destructor" << data << endl;

	}

};

int main()
{
	//test t1{ 100 };
	/*test* t1 = new test{ 1000 };
	delete t1;*/
	std::unique_ptr<test> p1 (new test{ 11 });
	std::unique_ptr<test> p2 = std::make_unique<test>(10000);
	std::unique_ptr<test> p3;
	p3 = move(p1);

	if (!p1)
	{
		cout << "p1 is nullptr" << endl;
	}




}
