#include<iostream>
#include<vector>
using namespace std;

bool sorted(vector<int> &arr,int n){
    if(n==1 || n==0){return true;}
    return arr[n-1]>=arr[n-2] && sorted(arr,n-1)?true:false;
}

int main(){
    vector<int> vec={1,8,3,4,5};
    int n=vec.size();
    cout<<sorted(vec,n);
    return 0;
}

// TC= O(n)
// SC= O(n)

