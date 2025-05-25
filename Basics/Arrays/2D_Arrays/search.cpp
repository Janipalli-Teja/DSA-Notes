#include <iostream>
using namespace std;

int main(){
    int arr[2][3];
    for(int i=0;i<2;i++){
        for(int j=0;j<3;j++){
            cout<<"item : ";
            cin>>arr[i][j];
        }
    }
    
    for(int i=0;i<2;i++){
        for(int j=0;j<3;j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
    
    // searching in 2d arrays and returning in pairs
    int n;
    pair<int,int> p;
    cout<<"enter an element to be found : ";
    cin>>n;
    
    for(int i=0;i<2;i++){
        for(int j=0;j<3;j++){
            if(arr[i][j]==n){
                p={i,j};
                cout<<p.first<<p.second;
            }
        }
        cout<<endl;
    }
    return 0;
}