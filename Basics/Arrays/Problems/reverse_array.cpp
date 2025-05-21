#include<iostream>
using namespace std;
int main(){
    int size=7;
    int item;
    int arr[size]={1,2,3,4,5,6,7};
    // two pointer technique
    int start=0;
    int last=size-1;
    for(int i=0;i<size/2;i++){
        swap(arr[start],arr[last]);
        start++;
        last--;
    }
    for(int i=0;i<size;i++){
        cout<<arr[i]<<" ";
    }

    return 0;
}