#include <iostream>
#include <vector>
using namespace std;
int main() {
    int arr[5] = {1, 2, 3, 4, 5};
    int maxSum = INT_MIN;

    for (int st = 0; st < 5; st++) {
        int currsum=0;
        for (int end = st; end < 5; end++) {
            currsum+=arr[end];
            maxSum=max(currsum,maxSum);
        }
    }

    cout << "Maximum subarray sum: " << maxSum << endl;
    return 0;
}


// Time complexity  - O(n^2)