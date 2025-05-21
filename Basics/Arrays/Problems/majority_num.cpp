#include<iostream>
#include<vector>
#include <algorithm>

using namespace std;

// /*This is Brut-Force*/ ------------O(n^2)
// int majority_item(vector<int> &vec){
//     for(int val:vec){
//         int count=0;
//         for(int val2:vec){
//             if(val==val2){
//                 count++;
//             }
//         }
//         if(count>vec.size()/2){
//             return val;
//         }
//     }
//     return 0;
// }

// /*This is better approach */ --------------------O(nlogn)
// int majority_item(vector<int>& vec){
//     int size=vec.size();
//     sort(vec.begin(),vec.end());

//     int count=1;
//     for(int val=1;val<size;val++){
//         if(vec[val]==vec[val-1]){
//             count++;
//         }
//         if(count>size/2){
//             return vec[val];
//         }
//     }
//     return 0;


// }

// Optimal Approach boyer-moore algorithm
int majority_item(vector<int> vec){
    int freq=0,ans=0;
    int n=vec.size();
    for(int i=0;i<n;i++){
        if(freq==0){
            ans=vec[i];
        }
        if(ans==vec[i]){
            freq++;
        }
        else{
            freq--;
        }
    }
    return ans;

}

int main(){
    vector<int> vec={3,2,3,3,5};

    int ans=majority_item(vec);
    cout<<ans;
    return 0;

}