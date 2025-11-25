// Basic Operations Of Tree Data Structure

#include <iostream>
#include <vector>
using namespace std;

class Node
{
public:
    int data;
    vector<Node *> children;
    Node(int x)
    {
        data = x;
    }
};
void addChild(Node *parent, Node *child)
{
    parent->children.push_back(child);
}

void printParents(Node *node, Node *parent)
{
    if (parent == nullptr)
    {
        cout << node->data << "-> Nullptr" << endl;
    }
    else
    {
        cout << node->data << "->" << parent->data << endl;
    }
    for (Node *child : node->children)
    {
        printParents(child, node);
    }
}

void printChildren(Node* node){
    if(node->children.empty()){
        cout<<node->data<<"->"<<"has no children"<<endl;
    }
    else{
        cout<<node->data<<"->";
        for(Node* child:node->children){
            cout<<child->data<<" ";
        }
        cout<<endl;
    }
    for(Node* child:node->children){
        printChildren(child);
    }
}

void printLeafNodes(Node* node){
    if(node->children.empty()){
        cout<<node->data<<" is a leafnode"<<endl;
        return;
    }
    for(auto child:node->children){
       printLeafNodes(child);
    }
}

void printDegrees(Node* node){
    if(node->children.empty()){
        cout<<node->data<<" degree is "<<0<<endl;
        return;
    }else{
        int degree=node->children.size();
        cout<<node->data<<" degree is "<<degree<<endl;
    }
    for(auto child:node->children){
        printDegrees(child);
    }
}

int main()
{

    Node *root = new Node(0);
    Node *n1 = new Node(1);
    Node *n2 = new Node(2);
    Node *n3 = new Node(3);

    addChild(root, n1);
    addChild(root, n2);
    addChild(n2, n3);
    cout<<"printing parents"<<endl;
    printParents(root, nullptr);
    cout<<"printing children"<<endl;
    printChildren(root);

    cout<<"printing leaf nodes "<<endl;
    printLeafNodes(root);
    cout<<"printing degree of a node "<<endl;
    printDegrees(root);
    return 0;
}