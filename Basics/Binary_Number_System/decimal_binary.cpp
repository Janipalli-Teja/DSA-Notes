#include<iostream>
#include <string>
#include <algorithm>
using namespace std;


int main(){
    int n;
    cout<<"enter a number : ";
    cin>>n;

    int q=n,r;
    string str="";

    while(q!=0){
        r=q%2;
        q/=2;
        str+=to_string(r);
    }

    reverse(str.begin(),str.end());
    cout<<"binary number is : "<<str;
    return 0;
}



// or simpler version


int main(){
    int n;
    int pow=1,rem;
    int res=0;

    cout<<"Enter a number : ";
    cin>>n;

    while(n>0){
        rem=n%2;
        n/=2;
        res+=(rem*pow);
        pow*=10;
    }
    cout<<res;
    return 0;
}