#include<iostream>
#include <iostream>
using namespace std;

// O(n)
// traditionalway
/*
int power(int x, int n)
{
    int res = 1;
    if(n==0){
        return 1;
    }
    for (int i = 0; i < n; i++)
    {
        res*=x;
    }
    return res;
}
*/

// optimal
// O(logn)
int power(int x,int n){
    int bn=n;
    if(bn<0){
        x=1/x;
        bn=-bn;
    }
    int ans=1;

    while(bn>0){
        if(bn%2==1){
            ans*=x;
        }
        x*=x;
        bn/=2;
    }
    return ans;

}

int main()
{
    int x, n;
    cout << "Enter a number : ";
    cin >> x;
    cout << "Enter a exponent : ";
    cin >> n;
    cout << "the res is " << power(x, n);
    return 0;
}

