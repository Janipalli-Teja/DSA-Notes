#include<iostream>
using namespace std;
int main(){
    
    for(int i=1;i<=5;i++){
        char l='A';
        for(int j=1;j<=5;j++){
            cout<<l;
            l++;
        }
        cout<<"\n";

    }
    return 0;
}

/*
ABCDE
ABCDE
ABCDE
ABCDE
ABCDE
*/