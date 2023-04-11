#include <iostream>
#include<memory>
#include<algorithm>
#include<vector>

using namespace std;

class Test
{
public:
	int data;

public:
	Test() :data{ 0 }
	{
		cout << "Test constructor" << data << endl;
	}

	Test(int data) :data{ data }
	{
		cout<< "Test constructor" << data << endl;
	}

	~Test()
	{
		cout<< "A destructor"<<data<<endl;

	}
	int get_data()
		{
			return data;
		}

};

std::unique_ptr<std::vector<std::shared_ptr<Test>>> make()
{
	return std::make_unique<std::vector<std::shared_ptr<Test>>>();
}

void fill(std::vector<std::shared_ptr<Test>>& vec, int num)
{
	int temp;
	for (int i = 1; i <= num; i++)
	{
		cout<< "Enter data point[" << i << "]:" << endl;
		cin>> temp;
		std::shared_ptr<Test> ptr = std::make_shared<Test>(temp);
		vec.push_back(ptr);

	}
}

void display(std::vector<std::shared_ptr<Test>> &vec)
{
	cout << "Display vecotr data:" << endl;
	cout << "-------------" << endl;
	for (const auto& ptr : vec)
	{
		cout << ptr->get_data() << endl;

	}
	cout << "-------------" << endl;

}

int main()
{
	std::unique_ptr<vector<std::shared_ptr<Test>>> vec_ptr;
	vec_ptr = make();
	cout << "how many data points to add in vector:";
	int n;
	cin >> n;
	fill(*vec_ptr, n);
	display(*vec_ptr);
	return 0;

}
