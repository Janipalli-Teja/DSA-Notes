#include<iostream>
#include<vector>
#include<climits>
using namespace std;

int max_profit(vector<int>& vec){
    int buy=vec[0];
    int maxp=INT_MIN;
    for(int i=1;i<vec.size();i++){
        if(buy<vec[i]){
            maxp=max(maxp,vec[i]-buy);
        }
        buy=min(buy,vec[i]);

    }
    return maxp;
}
int main(){
    vector<int> vec={1,2,3,4,5,6,6};
    cout<<max_profit(vec);
    return 0;
}
