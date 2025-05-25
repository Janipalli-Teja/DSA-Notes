#include<iostream>
using namespace std;

int main(){
    int row=3,col=3;
    // syntax for assigning elements to 2d array;
    int arr[3][3]={{1,2,3},{4,5,6},{7,8,9}};

    for(int i=0;i<row;i++){
        for(int j=0;j<col;j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
    
    // taking input for the 2d array
    
    int arr1[2][3];
    
    for(int i=0;i<2;i++){
        for(int j=0;j<3;j++){
            cout<<"arr "<<i<<j<<" ";
            cin>>arr1[i][j];
        }
    }
    for(int i=0;i<2;i++){
        for(int j=0;j<3;j++){
            cout<<arr1[i][j]<<" ";
        }
        cout<<endl;
    }
    
    return 0;
}