#include<iostream>
#include<deque>

using namespace std;

int main(){
    deque<int> dq;

    dq.push_back(1);
    dq.push_back(2);
    for(auto val:dq){
        cout<<val<<" ";
    }
    cout<<endl;
    
    dq.push_front(3);
    dq.push_front(5);
    for(auto val:dq){
        cout<<val<<" ";
    }
    
    cout<<endl;
    dq.pop_back();
    for(auto val:dq){
        cout<<val<<" ";
    }
    cout<<endl;
    dq.pop_front();
    for(auto val:dq){
        cout<<val<<" ";
    }

    // in DQ we can access the elements through index values 
    cout<<endl;
    cout<<dq[1]<<endl;

    
    return 0;
}