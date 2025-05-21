#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter a Binary number ";
    cin>>n;
    int pow=1,res=0;
    while(n>0){
        int rem=n%10;
        res+=pow*rem;
        pow*=2;
        n/=10;
    }
    cout<<res;
    return 0;
}