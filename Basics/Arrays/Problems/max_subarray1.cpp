#include <iostream>
#include <vector>
using namespace std;
int main() {
    int arr[5] = {1, 2, 3, 4, 5};
    int maxSum = INT_MIN;

    for (int st = 0; st < 5; st++) {
        for (int end = st; end < 5; end++) {
            int sum = 0;
            for (int i = st; i <= end; i++) {
                cout << arr[i];
                sum += arr[i];
            }
            maxSum = max(sum, maxSum);
            cout << " ";
        }
        cout << "\n";
    }

    cout << "Maximum subarray sum: " << maxSum << endl;
    return 0;
}


// Time complexity  - O(n^3)