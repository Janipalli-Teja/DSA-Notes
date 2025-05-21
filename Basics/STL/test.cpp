#include<iostream>
#include<vector>
using namespace std;

int main(){
    vector<int> arr={2,3,4,21,4,4};
    
   //erase(start,end) -- deletes from start to end-1;
   arr.erase(arr.begin(),arr.begin()+3);
   
   for(int i : arr){
     cout<<i<<endl;
   }   
   cout<<"-------------"<<endl;
   cout<<*arr.begin()<<endl;
   cout<<*arr.end()<<endl;

   return 0; 
}
