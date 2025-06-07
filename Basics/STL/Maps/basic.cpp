#include<iostream>
#include<map>
#include<string>
using namespace std;

int main(){
    map<string,int> MarksMap;

    MarksMap["teja"]=43;
    MarksMap["vijay"]=42;
    MarksMap["Santu"]=41;

    for(auto key:MarksMap){
        cout<< key.first<<":"<<key.second<<endl;
    }
    return 0;

}