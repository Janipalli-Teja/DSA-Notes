#include<iostream>
#include<vector>
using namespace std;
void merging(vector<int>& arr,int low,int mid,int high){
    vector<int> temp;
    int left=low;
    int right=mid+1;
    while(left<=mid && right<=high){
        if(arr[left]<=arr[right]){
            temp.push_back(arr[left]);
            left++;
        }else{
            temp.push_back(arr[right]);
            right++;
        }
    }
    while(left<=mid){
        temp.push_back(arr[left]);
        left++;
    }
    while(right<=high){
        temp.push_back(arr[right]);
        right++;
    }
    
    for(int i=low;i<=high;i++){
        arr[i]=temp[i-low];
    }
}

void mergesort(vector<int>& arr,int low,int high){
    if(low>=high) return;
    
    int mid = low + (high - low) / 2;
    mergesort(arr,low,mid);
    mergesort(arr,mid+1,high);
    
    merging(arr,low,mid,high);
}

int main(){
    vector<int> arr={5,3,8,2};
    int len=arr.size();
    mergesort(arr,0,len-1);
    
    for(int i:arr){
        cout<<i<<" ";
    }
    
    return 0;
}


// O(nlogn) - tc
// O(n) - sc
