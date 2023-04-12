#include <iostream>
#include<memory>
#include<algorithm>
#include<vector>

using namespace std;

class Player
{
public:
	int age;
	string name;

public:
	Player() :Player{0,"none"}
	{
		cout << "defalut constructor" << endl;
	}
	Player(int a, string s):age{a},name{s}
	{
		cout << "param constructor" << endl;
	}

	void setdata(int a,string n)
	{
		age = a;
		name = n;
	}
	void getdata()
	{
		cout << "name is:" << name << endl;
		cout << "age is:" << age << endl;
	 }

};

int main()
{
	Player p2;
	Player p1(20,"snehal");
	p2.getdata();
	p1.getdata();
	return 0;

}
