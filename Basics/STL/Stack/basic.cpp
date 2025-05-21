#include<iostream>
#include<stack>

using namespace std;

int main(){
    stack<int> st;

    st.push(1);
    st.push(2);
    st.emplace(3);
    
    while(!st.empty()){
        cout<<st.top()<<" ";
        st.pop();
    }
    
    // swaping of stack
    
    stack<int> s1;
    stack<int> s2;
    
    
        s1.push(1);
        s1.push(2);
        s1.push(3);
    s1.swap(s2);
    cout<<endl;


    cout<<"stack 1 size : "<<s1.size()<<endl;
    cout<<"stack 2 size : "<<s2.size();


    return 0;
}