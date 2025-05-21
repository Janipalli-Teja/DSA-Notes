#include<iostream>
#include<vector>
using namespace std;

int bubblesort(vector<int>& arr){      // O(n^2)
    int n=arr.size();
    for(int i=0;i<n;i++){            // 1*n
        bool isSwap=false;          // in order to eliminate the remaining operations if the array is sorted 
        for(int j=0;j<n-i-1;j++){  //  n*n
            if(arr[j]>arr[j+1]){
                swap(arr[j],arr[j+1]);
                isSwap=true;
            }
        }
        if(!isSwap){
            return 0;
        }
    }
    return 0;

}
int main(){
    vector<int> arr={2,1,5,4,6};
    int n=arr.size();
    bubblesort(arr);
    for(int i=0;i<n;i++){
        cout<<arr[i]<<endl;
    }
    return 0;
}
