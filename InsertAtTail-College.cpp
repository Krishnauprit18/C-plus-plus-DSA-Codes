#include<iostream>
using namespace std;

class Node
{
public:
    int data;
    Node* next;

    Node(int data)
        {
            this -> data = data;
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

int main()
{
    Node* node1 = new Node(15);

    Node* head = node1;
    Node* tail = node1;
    print(head);


   insertAtTail(tail,20);
   print(head);

   insertAtTail(tail,25);
   print(head);

   insertAtTail(tail,30);
   print(head);
}






