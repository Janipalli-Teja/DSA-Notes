#include<iostream>
using namespace std;
int main(){
    int size=6;
    int item;
    int arr[size]={2,4,1,5,8,2};
    cout<<"enter the element to find : ";
    cin>>item;

    for(int i=0;i<size;i++){
        if(arr[i]==item){
            cout<<"search found at "<<i<<" numbered index";
            exit(0);
        }
    }
    cout<<"search not found";

    return 0;
}