#include<iostream>
using namespace std;
int sum(int n);
int main(){
    int n;
    cout<<"enter a value : ";
    cin>>n;
    cout<<"the sum of digits is : "<<sum(n);
    return 0;
}
int sum(int n){
    int sum=0;
    while(n>0){
        int last_digit=n%10;
        n=n/10;
        sum+=last_digit;
    }
    return sum;
}