#include<iostream>
using namespace std;
int main(){
    int count=3;
    int num=1;
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
1 2 3 
4 5 6
7 8 9
*/