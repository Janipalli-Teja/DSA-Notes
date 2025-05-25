#include <iostream>
using namespace std;

int main()
{
    int arr[3][3] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};

    // O(n^2)
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
    int diagnalSum = 0;
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            if (i == j || i + j == 2)
            {
                diagnalSum += arr[i][j];
            }
        }
    }
    cout << diagnalSum << endl;

    //  optimal way we know j=n-i-1 , so if we know i value then we can solvein O(n)
    int n=3,sum=0;
    int arr1[n][n] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};

    for(int i=0;i<n;i++){
        sum+=arr1[i][i];
        if(i!=n-i-1){
            sum+=arr1[i][n-i-1];
        }
    }
    cout<<"sum : "<<sum;
    return 0;
}