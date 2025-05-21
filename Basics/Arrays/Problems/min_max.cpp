#include<iostream>
using namespace std;
int main(){
    int size;
    cout<<"enter the size of the array : ";
    cin>>size;
    int arr[size]={};

    for(int i=0;i<size;i++){
        cout<<"enter the "<<i<<"th element : ";
        cin>>arr[i];
    }

    int min=arr[0];
    int max=arr[0];
    for(int i=0;i<size;i++){
        if(arr[i]<min){
            min=arr[i];
        }
        if(arr[i]>max){
            max=arr[i];
        }

    }
    cout<<"min is "<<min<<endl;
    cout<<"max is "<<max<<endl;

    return 0;
}