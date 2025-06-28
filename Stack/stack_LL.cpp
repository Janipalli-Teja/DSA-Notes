// stack using linked list 
#include<iostream>
#include<list>
using namespace std;

class stack{
public:
    list<int> ll;
    void push(int val){
        ll.push_front(val);
    }
    void pop(){
        ll.pop_front();
    }
    int top(){
        return ll.front();
    } 
    bool empty(){
        return ll.empty();
    }
};

int main(){
    
    stack s;
    s.push(1);
    s.push(2);
    s.push(3);
    s.push(4);
    s.push(5);
    while(!s.empty()){
        cout<<s.top()<<endl;
        s.pop();
    }
    return 0;
}