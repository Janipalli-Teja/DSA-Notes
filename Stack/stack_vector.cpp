// stack using vector/array

#include<iostream>
#include<vector>
using namespace std;

class stack{
public:
vector<int> s;
    void push(int val){
        s.push_back(val);

    }
    int top(){
        return s[s.size()-1];
    }
    void pop(){
        s.pop_back();
    }
    void display(){
        for(int i=0;i<s.size();i++){
            cout<<s[i]<<" ";
        }
    }

    bool empty(){
        return s.empty();
    }
};
int main(){
    stack s1;
    s1.push(1);
    s1.push(2);
    s1.push(3);
    s1.push(4);
    cout<<s1.top()<<endl;
    s1.display();
    cout<<"\npoping last elements"<<endl;
    while(!s1.empty()){
        cout<<s1.top()<<endl;
        s1.pop();
    }
    return 0;
}