
#include <iostream>
#include<map>
#include <string>
#include<functional>

using namespace std;

struct Edge {
    
    unsigned long v1;
    unsigned long v2;
    Edge() {
        v1 = -1;
        v2 =-1;
    }
    
    Edge(unsigned long _v1, unsigned long _v2): v1(_v1),v2(_v2) {
        
    }
    
    friend std::ostream&operator <<( std::ostream &os, const Edge &e);
     
};

std::ostream&operator <<( std::ostream &os, const Edge &e) {
    os<<e.v1<<" ,"<<e.v2<<endl;
    return os;
}

struct Edgecompare {
     const bool operator()(const Edge &lhs, const Edge &rhs ) const {
         return lhs.v1 +lhs.v2 <rhs.v1+ rhs.v2;
     }
};

int main()
{
    std::map<std::string, Edge> mymap;
    using Stringedge= std::map<std::string, Edge>;
    mymap["edge1"] = Edge(1,1);
    cout<<mymap["edge1"]<<endl;
    
    mymap.insert( std::pair("edge2", Edge(2,2)));
    mymap["edge2"] = Edge(2,2);
    cout<<mymap.at("edge2")<<endl;
    
    const auto [it, success] = mymap.insert(std::pair("edge3",Edge(3,3)));
    cout<<"edge3 is added "<<success<<endl;
    cout<<it->first<<":"<<success<<endl;
    
    for(Stringedge::iterator it= mymap.begin(); it!=mymap.end();++it) {
        cout<<it->first<<endl;
    }
    
    for(const auto &keys:mymap) {
        cout<<keys.first<<":"<<keys.second<<endl;
    }
    
    if(mymap.contains("edge3")) {
        mymap.erase("edge3");
    }
    
     for(const auto &[keys,values]:mymap) {
        cout<<keys<<":"<<values<<endl;
    }
    
    std::map<Edge,std::string,Edgecompare> mymap2;
    Edge e1(8,8);
    Edge e2(0,8);
    
    mymap2[e1] = "test1";
    mymap2[e2] = "test2";
    
        for(const auto &[keys,values]:mymap2) {
        cout<<keys<<":"<<values<<endl;
    }
    
    
    return 0;
}