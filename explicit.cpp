#include<iostream>
using namespace std;
class base
{public:
	int x;
public:

	explicit base(int a)
	{
		x = a;
	}

};


int main()
{
	base b =2.4;
	cout << b.x << endl;
}