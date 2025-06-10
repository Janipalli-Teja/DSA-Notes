#include<iostream>
#include<vector>
using namespace std;

bool Search(vector<int>& vec,int st,int end,int target){
    int mid=st+(end-st)/2;
    if(st<=end){

        if(vec[mid]==target){
            return true;
        }
        else if(target>=vec[mid]){
            st=mid+1;
            return Search(vec,st,end,target);
        }
        else if(target<mid){
            end=mid-1;
            return Search(vec,st,end,target);
        }
    }
    return false;

}

int main(){
    vector<int> vec={1,3,5,7,9,13};
    int n=vec.size();
    int end=n-1,st=0,tar=12;

    cout<<Search(vec,st,end,tar);
    return 0;
}