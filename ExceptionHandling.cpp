#include <iostream>
#include <stdexcept>

using namespace std;

class Resource {
    public:
    Resource() {
        cout<<"constructed"<<endl;
    }
    ~Resource() {
        cout<<"destructed"<<endl;
    }
};

void foo() {
    Resource r;
    throw runtime_error("runtime error in foo()");
}


int main() {

try {
    foo();
	}
	
	catch (const std::exception& e) {
	cout<<e.what();
	}

}