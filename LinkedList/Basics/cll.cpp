#include <iostream>
using namespace std;

class Node
{
public:
    int val;
    Node *next;

    Node(int val)
    {
        this->val = val;
        this->next=nullptr;
    }
};

class CLL
{
    Node *head;
    Node *tail;

public:
    CLL()
    {
        head = tail = NULL;
    }

    void insert_at_head(int val)
    {
        Node *newnode = new Node(val);
        if (head == nullptr)
        {
            head =tail =newnode;
            tail->next=newnode;
        }
        else
        {
            newnode->next = head;
            head = newnode;
            tail->next = newnode;
        }
    }
    void insert_at_tail(int val)
    {
        Node *newnode = new Node(val);
        if (head == nullptr)
        {
            head =tail =newnode;
            tail->next=newnode;
        }
        else
        {
            newnode->next = tail->next;
            tail->next = newnode;
            tail = tail->next;
        }
    }

    void deleteNodeAtHead(){
        if(head==NULL){
            return;
        }
        else if(head->next==NULL){
            delete head;
            head=tail=nullptr;
        }
        else{
            Node* temp=head;
            tail->next=head->next;
            head=head->next;
            temp->next=NULL;
            delete temp;
        }
    }

    void deleteNodeAtTail(){
        if(tail==NULL){
            return;
        }
        else if(head==tail){
            delete tail;
            head=tail=nullptr;
        }
        else{
            Node*prev=head;
            while(prev->next!=tail){
                prev=prev->next;
            }
            prev->next=tail->next;
            tail->next=nullptr;
            delete tail;
            tail=prev;
        }
    }


    void display(){
        Node* curr=head;
        do{
            cout<<curr->val<<" ";
            curr=curr->next;
        }while(curr!=head);
        cout<<endl;
    }
};

int main()
{
    CLL li;
    li.insert_at_head(1);
    li.insert_at_head(2);
    li.display();
    li.insert_at_tail(3);
    li.insert_at_tail(4);

    li.display();
    
    li.deleteNodeAtHead();
    li.display();
    li.deleteNodeAtTail();
    li.display();
    return 0;
}