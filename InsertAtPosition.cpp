#include<iostream>
using namespace std;

class Node
{
public:
    int data;
    Node* next;

    Node(int data)
    {
        this-> data = data;
        this -> next = NULL;
    }
};

void insertAtHead(Node* &head, int d)
{
    Node* temp = new Node(d);
    temp -> next = head;
    head = temp;
}

void insertAtTail(Node* &tail, int d)
{
    Node* temp = new Node(d);
    tail -> next = temp;
    tail = tail -> next;
}

void print(Node* tail)
{
    Node* temp = tail;
    while(temp!=NULL)
    {
        cout<<temp->data<<" ";
        temp = temp->next;
    }
    cout<<endl;
}

void InsertAtPosition(Node* &head, Node* &tail, int position, int data)
{
    // insert at head:-
    if(position == 1)
    {
        insertAtHead(head, data);
        return;
    }
    Node* temp = head;
    int count = 1;

    while(count < position-1)
    {
        temp = temp -> next;
        count++;
    }

    //insert at tail:-
    if(temp -> next == NULL)
    {
        insertAtTail(tail, data);
        return;
    }

    Node* nodeTOInsert = new Node(data);
    nodeTOInsert -> next = temp -> next;
    temp -> next = nodeTOInsert;
}

int main()
{
    Node* node1 = new Node(15);
    Node* head = node1;
    Node* tail = node1;
    print(head);


   cout<<"head"<<" "<<head->data<<endl;
   cout<<"tail"<<" "<<tail->data<<endl;

   return 0;
}
