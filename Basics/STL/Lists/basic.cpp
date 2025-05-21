#include<iostream>
#include<list>

using namespace std;

int main(){
    list<int> li;

    li.push_back(1);
    li.push_back(2);
    for(auto val:li){
        cout<<val<<" ";
    }
    cout<<endl;
    
    li.push_front(3);
    li.push_front(5);
    for(auto val:li){
        cout<<val<<" ";
    }
    
    cout<<endl;
    li.pop_back();
    for(auto val:li){
        cout<<val<<" ";
    }
    cout<<endl;
    li.pop_front();
    for(auto val:li){
        cout<<val<<" ";
    }
    
    return 0;
}