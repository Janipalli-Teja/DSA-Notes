#include<iostream>
using namespace std;

int main(){
    int arr[3][2]={{1,2},{3,4},{5,6}};
    int maxrow=INT_MIN;
    for(int i=0;i<3;i++){
        int sum=0;
        for(int j=0;j<2;j++){
            sum+=arr[i][j];
        }
        maxrow=max(maxrow,sum);
    }
    cout<< maxrow;

    return 0;
}