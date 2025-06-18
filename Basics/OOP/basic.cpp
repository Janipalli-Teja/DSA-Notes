#include <iostream>
#include <string>
using namespace std;

class student
{
private:
    string dept;
    int roll;

public:
    // way 1
    student(string dept)
    {
        this->dept = dept;
        this->roll = 0; // or some default value
    }
    // way 2 - this cause error because parameter=parameter
    // student(string dept){
    //     dept=dept;
    // }

    // to use without this
    student(string d, int r)
    {
        dept = d;
        roll = r;
    }
    string getter()
    {
        return "Dept: " + dept + ", Roll: " + to_string(roll);
    }
};

int main()
{
    student s1("cse");
    cout << s1.getter();
    return 0;
}