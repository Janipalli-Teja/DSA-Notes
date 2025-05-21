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
                cout<<count<<"  ";
                count++;
            }
            else{
                cout<<" "<<"  ";
            }
        }
        count=1;
        cout<<"\n";
    }
    return 0;
}

/*

            1  
         1  2
      1  2  3
   1  2  3  4
1  2  3  4  5
*/