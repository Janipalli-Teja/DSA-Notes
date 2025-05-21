#include<iostream>
using namespace std;

int selection(int arr[],int n){
    for(int i=0;i<n-1;i++){
        int small_num=i;
        for(int j=i+1;j<n;j++){
            if(arr[j]<arr[small_num]){
                small_num=j;
            }
        }
        swap(arr[i],arr[small_num]);
    }
    return 0;
}

int main(){
    int arr[]={7,2,5,1,6,9,3,1};
    int n=sizeof(arr)/sizeof(arr[0]);
    selection(arr,n);
    for(int i=0;i<n;i++){
        cout<<arr[i]<<endl;
    }
    return 0;
}
