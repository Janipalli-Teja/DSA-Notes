#include<iostream>
#include<vector>

// 4, 2,5,2,7 ;  i=1,j=1->n-1

// 2,4, 5,2,7;   i=2,j=i->n-1

// 2,4,5, 2,7;  ->2,4,5,5,7;  -> 2,4,4,5,7; -> 2,2,4,5,7;  i=3,j=i->n-1

// 2,2,4,5, 7;  i=4,j=i->n-1


using namespace  std;

int insertion(vector<int>& arr,int n){
    for(int i=0;i<n;i++){
        int curr=arr[i];
        int prev=i-1;
        while(prev>=0 && arr[prev]>curr){
            arr[prev+1]=arr[prev];
            prev--;
        }
        arr[prev+1]=curr;
    }
    return 0;
}

int main(){
    vector<int> arr={4,2,5,2,7};
    int n=arr.size();
    insertion(arr,n);
    int i=0;
    while(i<n){
        cout<<arr[i]<<endl;
        i++;
    }
    return 0;
}
