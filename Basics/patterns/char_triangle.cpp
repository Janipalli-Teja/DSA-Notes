#include<iostream>
using namespace std;
int main(){
    char c='a';
    for(int i=1;i<=5;i++){
        for(int j=1;j<=i;j++){
            cout<<c;
        }
        cout<<"\n";
        c++;
    }
    return 0;
}

/*
a
bb
ccc
dddd
eeeee
*/

