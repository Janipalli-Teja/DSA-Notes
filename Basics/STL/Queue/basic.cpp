#include<iostream>
#include<queue>

using namespace std;

int main(){
    queue<int> st;

    st.push(1);
    st.push(2);
    st.emplace(3);
    
    while(!st.empty()){
        cout<<st.front()<<" ";
        st.pop();
    }
    
    // swaping of stack
    
    queue<int> s1;
    queue<int> s2;
    
    
        s1.push(1);
        s1.push(2);
        s1.push(3);
    s1.swap(s2);
    cout<<endl;


    cout<<"queue 1 size : "<<s1.size()<<endl;
    cout<<"queue 2 size : "<<s2.size();


    return 0;
}