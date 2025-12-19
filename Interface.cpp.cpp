/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>
using namespace std;

class IRender {
    public:
    
    virtual void Draw() =0;
    virtual void Update()=0;
};

class Vulkan: public IRender {
        void Draw() override {
        cout<<" Vulkan::Draw"<<endl;
        
    }
    void Update() override{
        cout<<" Vulkun::Update"<<endl;
    }
    
};

class Render: public IRender {
        void Draw()  override {
        cout<<" Render::Draw"<<endl;
        
    }
    void Update() override {
        cout<<" Render::Update"<<endl;
    }
    
};


int main()
{
    IRender* instance = new Vulkan;
    instance->Draw();
    instance->Update();
    
    return 0;
}