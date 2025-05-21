#include<iostream>
#include<string>
#include <algorithm>
using namespace std;

int main(){
    string s="aka";
    string s1=s;
    reverse(s.begin(),s.end());
    if(s1==s){
        cout<<"palidrome"<<endl;
    }
    else{
        cout<<"not a palindrome"<<endl;
    }
    return 0;
}