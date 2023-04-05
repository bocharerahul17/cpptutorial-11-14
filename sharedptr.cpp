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

void func(std::shared_ptr<test>p)
{
	cout << "count in func" << p.use_count() << endl;

}

int main()
{

	//std::shared_ptr<test> p1 (new test{ 11 });
	//cout << "count" << p1.use_count() << endl;
	//std::shared_ptr<test> p2{ p1 };
	//cout << "count" << p2.use_count() << endl;
	
	std::shared_ptr<test> ptr = std::make_shared<test>(100);
	func(ptr);
	{
		std::shared_ptr<test> ptr1 = ptr;
		cout << "count_ptr1" << ptr1.use_count()<<endl;
		ptr.reset();

		cout << "count_after reset" << ptr1.use_count()<<endl;
	}
	cout << "count" << ptr.use_count()<<endl;




}
