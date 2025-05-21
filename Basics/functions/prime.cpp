#include<iostream>
using namespace std;

void prime(int n);

int main(){
    int n;
    cout<<"enter a number : ";
    cin>>n;
    prime(n);    
}

void prime(int n){
    for(int i=2;i*i<n;i++){
        if(n%i==0){
            cout<<"it is not a prime";
            exit(0);
        }   
    }
    cout<<"it is a prime";
}
