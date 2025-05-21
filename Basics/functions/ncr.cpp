#include<iostream>
using namespace std;

int fact(int n){
    int fact=1;
    while(n>0){
        fact*=n;
        n--;
    }
    return fact;
}

int main(){
    int n,r;
    cout<<"enter n val : ";
    cin>>n;
    cout<<"enter r val : ";
    cin>>r;
    cout<<"the nCr value is "<<(fact(n))/(fact(r)*fact(n-r));
}