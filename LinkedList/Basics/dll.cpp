#include <iostream>
using namespace std;

class Node
{
public:
    int val;
    Node *next = NULL;
    Node *prev = NULL;
    Node(int val)
    {
        this->val = val;
    }
};

class DLL
{
public:
    Node *head;
    Node *tail;

    DLL()
    {
        head = tail = NULL;
    }
    void push_back(int val)
    {

        Node *newnode = new Node(val);
        if (head == nullptr)
        {
            head = tail = newnode;
        }
        else
        {
            newnode->prev = tail;
            tail->next = newnode;
            tail = tail->next;
        }
    }

    void push_front(int val)
    {
        Node *newnode = new Node(val);
        if (head == nullptr)
        {
            head = tail = newnode;
        }
        else
        {
            head->prev = newnode;
            newnode->next = head;
            head = newnode;
        }
    }

    void pop_front()
    {
        if (head == nullptr)
        {
            return;
        }
        if (head->next == nullptr)
        {
            // Only one node
            delete head;
            head = tail = nullptr;
            return;
        }
        else
        {
            Node *curr = head;
            head = head->next;
            head->prev = nullptr;
            delete curr;
        }
    }

    void pop_back()
    {
        if (head == nullptr)
        {
            return;
        }
        if (head->next == nullptr)
        {
            delete head;
            head = tail = nullptr;
            return;
        }
        Node *curr = tail;
        tail = tail->prev;
        tail->next = nullptr;
        delete curr;
    }

    void insert_at(int val, int pos)
    {
        if (pos < 0)
        {
            cout << "invalid position" << endl;
            return;
        }
        if (pos == 0)
        {
            push_front(val);
            return;
        }
        int count = 0;
        Node *curr = head;
        while (count < pos - 1 && curr != nullptr)
        {
            curr = curr->next;
            count++;
        }
        if (curr == nullptr)
        {
            cout << "position out of bounds";
            return;
        }
        if (curr->next == nullptr)
        {
            push_back(val);
            return;
        }
        Node *newnode = new Node(val);
        newnode->next = curr->next;
        newnode->prev = curr;
        curr->next->prev = newnode;
        curr->next = newnode;
    }
    void display()
    {
        Node *curr = head;
        while (curr != nullptr)
        {
            cout << curr->val << " ";
            curr = curr->next;
        }
        cout << endl;
    }
};

int main()
{
    DLL li;
    li.push_back(1);
    li.push_back(2);
    li.display();
    li.pop_back();
    li.display();

    li.push_back(3);
    li.push_back(4);
    li.display();
    li.pop_front();
    li.display();

    li.push_front(0);

    li.display();

    li.insert_at(7, 1);
    li.display();

    return 0;
}