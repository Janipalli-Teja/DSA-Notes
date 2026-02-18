#include<iostream>
#include<vector>
using namespace std;

void add_item(vector<int>& heap,int k){
    int n=heap.size();
    heap.push_back(k);
    int i=n;
    while(i!=0){
        int child=i;
        int parent=(i-1)/2;
        if(heap[parent]<heap[child]){
            swap(heap[parent],heap[child]);
            i=parent;
        }
        break;
    }
}

int main(){
    vector<int> heap={15,12,13,10,11};
    
    for(auto i:heap){
        cout<<i<<" ";
    }
    cout<<endl;
    add_item(heap,14);
    
    for(auto i:heap){
        cout<<i<<" ";
    }
    return 0;
}