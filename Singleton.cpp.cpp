#include <iostream>
#include <string>
#include <vector>


class logger {
    
    public:
        //  static logger* get_instance() 
        static logger& get_instance(){
            
            static logger* s_instance = new logger;
             return *s_instance;
            //  if(s_instance ==nullptr) {
            //      s_instance = new logger;
            //  }
             
            //  return s_instance;
         }
         
         void print_message() {
             for (auto &e: vec) {
                 std::cout<< "Hello message:" <<e<<std::endl;
             }
         }
         
        void addmessage(std::string s) {
            vec.push_back(s);
        }
    
    private:
    
        logger() {
            std::cout<<"constructor called"<<std::endl;
        }
        
        ~logger() {
            std::cout<<"destructor"<<std::endl;
        }
        
        // static logger* s_instance;
        std::vector<std::string> vec;
        
        
        
};

// logger* logger::s_instance = nullptr;


int main() {
    logger::get_instance().addmessage("Rahul");
    logger::get_instance().addmessage("snehal");
    
    logger::get_instance().print_message();
    
    

    return 0;
}