#include<iostream>
#include<vector>
#include<set>
#include<algorithm>

using namespace std;
    
    vector<vector<int>> threeSum(vector<int>& nums) {
        int n = nums.size();
        set<vector<int>> s;

        for (int i = 0; i < n; i++) {
            int a = -nums[i];
            set<int> s1;
            for (int j = i + 1; j < n; j++) {
                int c = a - nums[j];
                if (s1.find(c) != s1.end()) {
                    vector<int> triplet = {nums[i], nums[j], c};
                    sort(triplet.begin(),triplet.end());
                    s.insert(triplet);
                }
                s1.insert(nums[j]);
            }
        }

        vector<vector<int>> res(s.begin(),s.end());
        return res;
    }

    int main(){
        vector<int> vec={-1,0,1,2,-1,-4};
        vector<vector<int>> res=threeSum(vec);
        for(auto i:res){
            for(auto j:i){
                cout<<j<<" ";
            }
            cout<<endl;
        }
        return 0;
    }