// one is brute force using 2 loops , TC - O(n^2)

// better approach - two pointer technique
#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

vector<int> twoSum(vector<int>& nums, int target) {
    int n = nums.size();
    vector<pair<int, int>> num_with_index;

    // Pair up numbers with their original indices
    for (int i = 0; i < n; i++) {
        num_with_index.push_back({nums[i], i});
    }

    // Sort based on values
    sort(num_with_index.begin(), num_with_index.end());

    vector<int> arr;
    int start = 0, end = n - 1;

    while (start < end) {
        int sum = num_with_index[start].first + num_with_index[end].first;
        if (sum == target) {
            arr.push_back(num_with_index[start].second);
            arr.push_back(num_with_index[end].second);
            break; // you probably only want one pair
        }
        else if (sum > target) {
            end--;
        }
        else {
            start++;
        }
    }
    return arr;
}

int main() {
    vector<int> arr = {2, 7, 11, 15};
    int target = 9;
    vector<int> result = twoSum(arr, target);
    
    // Print result vector elements
    for (int idx : result) {
        cout << idx << " ";
    }
    cout << endl;

    return 0;
}


// best approch Hashmap - see it in Hashing folder