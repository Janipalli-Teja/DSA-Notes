#include <iostream>
#include <vector>
using namespace std;

int main()
{

    vector<int> vec1; // size is 0 by default
    cout << vec1.size() << endl;

    vector<int> vec2;

    vec2.push_back(11);    // adding items to vector
    vec2.push_back(10);    // adding items to vector
    vec2.push_back(12);    // adding items to vector
    vec2.push_back(13);    // adding items to vector
    vec2.push_back(14);    // adding items to vector
    vec2.emplace_back(14); // adding items to vector

    // intead of this
    cout << vec2[0] << endl;
    cout << vec2[1] << endl;
    cout << vec2[2] << endl;
    cout << vec2[3] << endl;
    cout << vec2[4] << endl;

    cout << "this is for each loop" << endl;
    // we can use for each loop in order to print all items in vector
    for (int v : vec2)
    {
        cout << v << endl;
    }

    vec2.pop_back(); // 13 is poped out
    cout << "After poping element" << endl;
    for (int v : vec2)
    {
        cout << v << endl;
    }

    cout << "-----------------" << endl;
    cout << vec2.front() << endl; // prints first element
    cout << vec2.back() << endl;  // prints last element
    cout << vec2.at(1) << endl;   // prints paticular element
    cout << "capacity of vec2 vector " << vec2.capacity() << endl;
    cout << "filled spaces in vec2 vector " << vec2.size() << endl;

    vector<int> arr = {2, 3, 4, 21, 4, 4};

    // erase(start,end) -- deletes from start to end-1;
    arr.erase(arr.begin(), arr.begin() + 3);

    for (int i : arr)
    {
        cout << i << endl;
    }
    cout << "-------------" << endl;
    cout << *arr.begin() << endl;
    cout << *arr.end() << endl;

    return 0;
}
