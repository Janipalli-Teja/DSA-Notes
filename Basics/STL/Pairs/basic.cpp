#include<iostream>
#include<vector>
using namespace std;

int main(){
    pair<string,int> p1={"teja",43};
    cout<<p1.first<<endl;
    cout<<p1.second<<endl;

    pair<char,int> p2={'T',43};
    cout<<p2.first<<endl;
    cout<<p2.second<<endl;

    pair<int,int> p3={32,43};
    cout<<p3.first<<endl;
    cout<<p3.second<<endl;

    cout<<"-------------------------------"<<endl;
    
    // Pair in pair 
    
    pair<int,pair<int,int>> p4={2,{3,4}};
    cout<<p4.first<<endl;
    cout<<p4.second.first<<endl;
    cout<<p4.second.second<<endl;
    
    cout<<"-------------------------------"<<endl;
    // vector of pairs 

    vector<pair<int,int>> vec={{1,2},{3,4},{5,6}};

    for(auto val : vec){
        cout<<val.first<<" , "<<val.second<<endl; 
    }
    
    return 0;
}