#include<iostream>
#include<vector>
// using Kadane's algorithm
// Maximum Subarray Problem
using namespace std;
int max_sub_array(const vector<int>& vec){
    int global_max=INT_MIN;
    int global_curr=0;
    for(int item:vec){
        global_curr+=item;
        global_max=max(global_max,global_curr);
        if(global_curr<0){
            global_curr=0;
        }

    }
    return global_max;
}
int main(){
    vector<int> vec1={-7,-1,-2,-3,-4,-5};

    cout<<max_sub_array(vec1);
    return 0;
}