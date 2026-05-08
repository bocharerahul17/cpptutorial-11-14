/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>
#include <string>
#include <forward_list>

// using namespace std;

class Iobserver {
    public:
       virtual ~Iobserver() {};
       virtual void On_notify() =0;
    
};


class Observer: public Iobserver {
    public:
        
       explicit  Observer(std::string name):m_name{name}{
            
        }
        
        void On_notify() {
            std::cout << "Observer:"<<m_name<< std::endl;
        }
     
    private:
        std::string  m_name;
     
    
    
};


class ISubject {
    public:
    
    
        void add_observer(Iobserver* s) {
            m_observers.push_front(s);
            //  std::cout<<"added Observer"<<s<<std::endl;
            
        }
        
        void remove_observer(Iobserver* s) {
            m_observers.remove(s);
            // std::cout<<"remoevd"<<s<<std::endl;
            
        }
        
        void notifyall() {
            for(auto& e:m_observers) {
                e->On_notify();
                
            }
            
        }
        
    private:
     std::forward_list<Iobserver*> m_observers;
     
};

class Some_subject : public ISubject {
     public:
     
};


int main()
{
    
    Some_subject subject;
    
    Observer obj1("Observer-1");
    Observer obj2("Observer-2");
    Observer obj3("Observer-3");
    
    subject.add_observer(&obj1);
    subject.add_observer(&obj2);
    subject.add_observer(&obj3);
    
    subject.notifyall();
    
    subject.remove_observer(&obj3);
    subject.notifyall();
    
    

    
    return 0;
}