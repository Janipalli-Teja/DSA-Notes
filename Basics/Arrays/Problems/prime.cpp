#include<iostream>
using namespace std;
int main(){
    int num;
    cout<<"enter a number ";
    cin>>num;
    if(num<2){
        cout<<"it is not a prime";
        return 0;
    }
    else if(num==2){
        cout<<"it is a prime"<<endl;
        return 0;
    }
    else{

        for(int i=2;i*i<num;i++){
            if(num%i==0){
                cout<<"it is not a prime"<<endl;
                exit;
            }
        }
    }
    cout<<"it is a prime"<<endl;
    return 0;
}

