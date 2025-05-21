#include <iostream>
#include<vector>
using namespace std;

// with recurrsion
// TC- O(logn)   SC-O(logn)
int BinaryS(arr,target,start,end){
    if(start<end){

        int mid=(start+end)/2;
        if(target>arr[mid]){
            return BinaryS(arr,target,mid+1,end);
        }
        else if(target<arr[mid]){
            return BinaryS(arr,target,start,mid-1);
        }
        else if(target===arr[mid]){
            return mid;
        }
    }
    return -1;
}
int main() {
    vector<int> arr={-1,0,3,4,5,8,12};
    int target=12;
    int start=0,end=arr.size()-1;
    // with iteration
    // TC-O(logn)  SC-O(1)   ---which is best
    while(start<=end){
        int mid=(start+end)/2;
        if(target<arr[mid]){
            end=mid-1;
        }
        else if(target>arr[mid]){
            start=mid+1;
        }
        else if(target==arr[mid]){
            cout<<mid;
            return 0;
        }
        
    }
    return -1;
    
}