#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int fun(vector<int>& arr,int low,int high){
    int pivot=arr[low];
    int i=low;
    int j=high;
    
    while(i<j){
        while(arr[i]<=pivot && i<high){
            i++;
        }
        
        while(arr[j]>=pivot && j>low){
            j--;
        }
        if(i<j){ swap(arr[i],arr[j]);}
        
    }
    swap(arr[low],arr[j]);
    
    return j;
}

void quicksort(vector<int>& arr,int low,int high){
    if(low<high){
        int partition=fun(arr,low,high);
        
        quicksort(arr,low,partition-1);
        quicksort(arr,partition+1,high);
    }
}

int main() {
	
	vector<int> arr={4,6,2,5,7,9,1,3};
	quicksort(arr,0,arr.size()-1);
	for(int i:arr){
	    cout<<i<<" ";
	}
	
}
