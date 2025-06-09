#include<iostream>
using namespace std;

int fib(int n,int first,int second){
    if(n==0){
        return 0;
    }
    cout<<first<<" ";
    int temp=first;
    first=second;
    second=temp+second;
    return fib(n-1,first,second);
}




int Nterm_fib(int n
    // ,int first,int second
){
    // my logic
    // if(n==1){
    //     cout<<first;
    //     return 0;
    // }
    // int temp=first;
    // first=second;
    // second=temp+second;
    // return Nterm_fib(n-1,first,second);

    // found logic(optimal)

    if(n==0||n==1){
        return n;
    }
    return Nterm_fib(n-1)+Nterm_fib(n-2);

}
int main(){

    // by loops 
    int n=5;
    int first=0,second=1;
    for(int i=0;i<n;i++){
        int temp=first;
        cout<<temp<<" ";
        first=second;
        second=temp+second;
    }
    cout<<endl;
    // by recursive function
    
    first=0;second=1;
    fib(n,first,second);
    cout<<endl;
    cout<<Nterm_fib(n);

    return 0;
}