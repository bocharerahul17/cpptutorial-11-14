/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>
#include <mutex>

class logger {
    
    public:
        static logger &get_instace() {
        std::lock_guard<std::mutex> lock(mtx);
         static logger  *s_instance = new logger;
         return *s_instance;
            
        }
        void show_messahe() {
            
            std::cout<<"Singleton class created"<<std::endl;
        }
        
    private:
    
        static std::mutex mtx;
        
      logger() {
          std::cout<<"constructor"<<std::endl;
          
      }
      ~logger() {
          std::cout<<"destructor"<<std::endl;
          
      }
      
    
    
};

std::mutex logger::mtx;

int main()
{
    
    logger::get_instace().show_messahe();
    logger::get_instace().show_messahe();
    
    
  
    return 0;
}