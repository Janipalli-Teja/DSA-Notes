// Basic Structure of creating a Linked List

#include <iostream>
using namespace std;

// Defining Node class

class Node
{
public:
    int data;
    Node *next;

    Node(int val)
    {
        data = val;
        next = NULL;
    }
};

// Linking Each Node
class LinkedList
{
private:
    Node *head;
    Node *tail;

public:
    LinkedList()
    {
        head = tail = NULL;
    }
    void push_front(int val) //O(1)
    {
        Node *newnode = new Node(val);
        // case1 : if head null
        if (head == NULL)
        {
            head = tail = newnode;
        }
        else
        {

            newnode->next = head;
            head = newnode;
        }
    }

    void push_back(int val) //O(1)
    {
        Node *newnode = new Node(val);
        if (head == NULL)
        {
            head = tail = newnode;
        }
        else
        {
            tail->next = newnode;
            tail = newnode;
        }
    }

    void pop_front() //O(1)
    {
        if (head == NULL)
        {
            return;
        }
        Node *curr = head;
        curr = curr->next;
        delete head;
        head = curr;
    }

    void pop_back() //O(n)
    {
        if (tail != NULL)
        {
            Node *curr = head;
            while (curr->next->next != NULL)
            {
                curr = curr->next;
            }
            delete tail;
            tail = curr;
            tail->next = NULL;
        }
    }

    void insert_at(int val,int pos){ //O(n)
        if(pos<0){
            return;
        }
        Node* newnode=new Node(val);
        if(pos==0){
            push_front(val);
            return;
        }
        Node*curr=head;
        int count=0;
        while(count<pos-1 && curr!=NULL){
            curr=curr->next;
            count++;
        }
        if(curr==NULL){
            delete newnode;
            return;
        }
        newnode->next=curr->next;
        curr->next=newnode;

        if(newnode->next==NULL){
            tail=newnode;
        }

    }

    void Search(int val){ //O(n)
        if(head==NULL){
            return;
        }
        Node* curr=head;
        while(curr!=NULL){
            if(curr->data==val){
                cout<<"found"<<endl;
                return;
            }
            curr=curr->next;
        }
        cout<<"not found"<<endl;
    }
    void display()
    {
        Node *curr = head;
        while (curr != NULL)
        {
            cout << curr->data << " ";
            curr = curr->next;
        }
        cout<<endl;
    }
};

int main()
{
    LinkedList ll;
    ll.push_front(1);
    ll.push_front(2);
    ll.push_front(3);
    ll.display();

    ll.push_back(4);
    ll.display();

    ll.pop_front();
    ll.display();

    ll.pop_back();
    ll.display();
    
    ll.insert_at(7,2);
    ll.display();

    ll.Search(11);

    return 0;
}