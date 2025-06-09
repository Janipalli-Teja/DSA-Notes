#include<iostream>
using namespace std;

int fun(int n){
    if(n!=0){
        cout<<n<<" ";
        fun(n-1);
    }
    return 0;
}
int main(){
    fun(10000);
    return 0;
}