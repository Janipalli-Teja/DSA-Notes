#include<iostream>
using namespace std;

class parent{
public:
    string name;
    float cgpa;
    int roll;
    parent(string name,float cgpa){
        this->cgpa=cgpa;
        this->name=name;
        cout<<"parent class called\n";
    }
};

class child : public parent{
    public:
    child(string name, float cgpa ,int roll):parent( name, cgpa){
        this->roll=roll;
        cout<<"child class called\n";
    }
    void display(){
        cout<<name<<endl;
        cout<<roll<<endl;
        cout<<cgpa<<endl;
    }

};


int main(){
    child stu("teja",5.4,43);
    stu.display();
    return 0;
}