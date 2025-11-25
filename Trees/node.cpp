// creating a node 
#include<vector>
#include<iostream>
using namespace std;

int main(){
    class Node{
        public:
           int val;
           vector<Node*> children;

        //    constructor
           Node(int val){
              this->val=val;
           }
    };
    return 0;
}