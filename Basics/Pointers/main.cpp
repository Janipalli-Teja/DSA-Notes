#include<iostream>
using namespace std;


int changeA1(int* b){
    *b=20;
    return 0;
}

int changeA2(int &b){
    b=20;
    return 0;
}


int main(){
    int a=10;

    int *ptr=&a;
    // this is pointer to pointer
    int **ptr1=&ptr;
    // values in each
    cout<<a<<endl;
    cout<<ptr<<endl;   //address of a
    cout<<ptr1<<endl;  //address of ptr

    // values in each
    cout<<&a<<endl;   //address of a
    cout<<&ptr<<endl;  //address of ptr
    cout<<&ptr1<<endl; //address of ptr1
    
    cout<<"-----------------"<<endl;
    // values in each
    // Dereference operator
    cout<<*ptr<<endl;  // value of the address element
    cout<<&a<<endl;   //address of a
    cout<<*(&ptr)<<endl; 
    cout<<*(ptr1)<<endl;

    // double dereference operation
    cout<<**(ptr1)<<endl;


    // pass by value 
    cout<<"pass by value "<<endl;
    int a1=10;
    changeA1(&a1);
    cout<<a1<<endl;
    cout<<"pass by reference "<<endl;
    changeA2(a1);
    cout<<a1<<endl;


    return 0;
}