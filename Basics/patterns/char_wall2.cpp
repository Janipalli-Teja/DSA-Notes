#include<iostream>
using namespace std;
int main(){
    int count=3;
    char num='A';
    for(int i=1;i<=count;i++){
        for(int j=1;j<=count;j++){
            cout<<num<<" ";
            num++;
        }
        cout<<"\n";

    }
    return 0;
}
/*
A B C 
D E F
G H I

*/