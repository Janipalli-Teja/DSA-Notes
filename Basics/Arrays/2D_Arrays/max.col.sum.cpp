#include <iostream>
using namespace std;

int main()
{
    int arr[3][2] = {{1, 2}, {3, 4}, {5, 6}};
    int maxcolsum = INT_MIN;
    for (int i = 0; i < 2; i++)
    {
        int sum = 0;
        for (int j = 0; j < 3; j++)
        {
            sum += arr[j][i];
        }
        maxcolsum = max(maxcolsum, sum);
    }
    cout << maxcolsum;
}

