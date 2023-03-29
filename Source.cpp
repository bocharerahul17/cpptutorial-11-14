#include<iostream>
using namespace std;
constexpr int bar(int a)
{
	return a * 2;
}
constexpr int foo(int a)
{
	return a * bar(2);
}

int main()
{
	constexpr int  a = 5;
	int b[a];
	int c[foo(3)];
	//cout << c << endl;
	//cout << a<<endl;

}