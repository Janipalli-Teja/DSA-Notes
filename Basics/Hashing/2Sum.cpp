#include<iostream>
#include<map>
#include<unordered_map>
#include<vector>
using namespace std;

vector<int> twoSum(vector<int>& nums, int target) {
    unordered_map<int,int> m;
    int first,second,n=nums.size();
    for(int i=0;i<n;i++){
        first=nums[i];
        second=target-nums[i];
        if(m.find(second)!=m.end()){
            return {i,m[second]};
        }
        m[first]=i;
    }
    return {};
}
int main(){
    vector<int> vec={2,7,11,15};
    int target=9;
    vector<int> res=twoSum(vec,target);

    for(auto i:res){
        cout<<i<<" ";
    }
    return 0;
}