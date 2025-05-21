#include<iostream>
#include<vector>

using namespace std;

bool isvalid(int mid,vector<int>&arr,int n,int m){         //O(n)
    int student=1,pages=0;
    for(int i=0;i<arr.size();i++){
        if(pages+arr[i]<=mid){
            pages+=arr[i];
        }
        else{
            student++;
            pages=arr[i];
        }
    }
    if(student>m){
        return false;
    }
    else{
        return true;
    }
}

int AllocateBooks(vector<int>& arr,int n,int m){        // so total TC- O(logN * n)
    if(m>n){
        return -1;
    }
    int size=arr.size();
    int sum=0;
    for(int i=0;i<size-1;i++){
        sum+=arr[i];
    }
    int start=0,end=sum,ans=-1;
    while(start<=end){             //O(logN)
        int mid=start+(end-start)/2;
        
        if(isvalid(mid,arr,n,m)){
            end=mid-1;
            ans=mid;
        }
        else{
            start=mid+1;
        }
    }
    return ans;
}

int main(){
    
    vector<int> arr={12, 34, 67, 90};
    int n=4,m=2;
    
    cout<<AllocateBooks(arr,n,m);
}