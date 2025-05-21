#include<iostream>
using namespace std;

int Euclid(int a,int b){
    while(a > 0 && b > 0){
        if(a>b){
            a=a%b;
        }else{
            b=b%a;
        }
    }
    if(a==0) return b;
    else return a;
}

// using recurrsion

int gcdrec(int a,int b){
    if(b==0){
        return a;
    }
    return gcdrec(b,a%b);
}

// LCM - least common number that can be divided by both a,b;

int lcm(int a,int b){
    int gcd=gcdrec(a,b);
    int lcm=(a*b)/gcd; 
    return lcm;
}

int main(){
    int a=21,b=7;
    cout<<Euclid(a,b)<<endl;
    cout<<lcm(a,b);
    return 0;
}