#include<iostream>
#include<vector>
using namespace std;

int main(){
    // vector<vector<int>> arr;  ->array declaration

    // in order to create specific size 

    int rows=3;
    int cols=3;

    vector<vector<int>> arr(rows,vector<int>(cols,0));

    // here row = arr.size();
    // coloumn = arr[i].size();
    
    // adding element to 2d vector

    for(int i=0;i<arr.size();i++){
        for(int j=0;j<arr[i].size();j++){
            cout<<"enter item : ";
            cin>>arr[i][j];
        }
    }

    // displaying the items in 2d vector
    for(int i=0;i<arr.size();i++){
        for(int j=0;j<arr[i].size();j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }

    return 0;
}