#include<iostream>
using namespace std;
int main(){
    for(int i=0;i<5;i++){
        int temp=i+1;
        for(int j=0;j<=i;j++){
            cout<<temp;
            temp--;
        }
        cout<<"\n";
    }
    return 0;
}

/*
1
21
321
4321
54321

*/

// approach 2 

int main(){
    for(int i=0;i<5;i++){
        for(int j=i+1;j>0;j--){
            cout<<j;
        }
        cout<<"\n";
    }
    return 0;
}

