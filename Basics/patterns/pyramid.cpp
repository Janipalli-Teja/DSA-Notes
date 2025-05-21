#include<iostream>
using namespace std;
int main(){
    int n=5;
    int temp;
    int count=1;
    for(int i=1;i<=n;i++){
        temp=n-i+1;
        for(int j=1;j<=n;j++){
            if(j>=temp){
                cout<<count<<" ";
                count++;
            }
            else{
                cout<<" "<<" ";
            }
        }
        for(int j=i-1;j>=1;j--){
            cout<<j<<" ";
        }

        count=1;
        cout<<"\n";
    }
    return 0;
}

/*
        1 
      1 2 1
    1 2 3 2 1
  1 2 3 4 3 2 1
1 2 3 4 5 4 3 2 1
*/


// Easy approach


// https://youtu.be/rga_q2N7vU8?feature=shared&t=4392