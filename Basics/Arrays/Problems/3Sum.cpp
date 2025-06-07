// Brute force
// TC- O(N^3*log(unique triptlets))
// SC- O(unique triplets)
#include<iostream>
#include<vector>
#include<set>
#include<algorithm>
using namespace std;

int main(){
    vector<int> vec={-1,0,1,2,-1,-4};
    vector<vector<int>> res;
    set<vector<int>> s;
    int n=vec.size();
    int sum=0;
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            for(int z=j+1;z<n;z++){
                    if(vec[i]+vec[j]+vec[z]==0){
                        vector<int> row={vec[i],vec[j],vec[z]};
                        sort(row.begin(),row.end());
                        if(s.find(row)==s.end()){
                            s.insert(row);
                            res.push_back(row);
                        }
                    }
            }
        }
    }
    for(auto i : res){
        for(auto j:i){
            cout<<j<<" ";
        }
        cout<<endl;
    }
    return 0;
}
