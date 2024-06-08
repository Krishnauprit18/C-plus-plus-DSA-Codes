#include<iostream>
using namespace std;

class Node
{
public:
    int data;
    Node* next;

    Node(int data)
    {
        this -> next = NULL;
        this -> data = data;
    }
};

void insertAtHead(Node* &head, int d)
{
    Node* temp = new Node(d);
    temp -> next = head;
    head = temp;
}

void print(Node* &head)
{
    Node* temp = head;
    while(temp != NULL)
    {
        cout<<temp -> data<<" ";
        temp = temp -> next;
    }
    cout<<endl;
}

int main()
{
    Node* node1 = new Node(78);
    Node* head = node1;

    Node* node2 = new Node(45);
    Node* head1 = node2;

    Node* node3 = new Node(35);
    Node* head2 = node3;

    Node* node4 = new Node(145);
    Node* head3 = node4;

    Node* node5 = new Node(135);
    Node* head4 = node5;


    //for(int i = 0; i<5; i++ )
    //{
      //  insertAtHead(node, i);
        //print(head)
    //}


    print(head);
    print(head1);
    print(head2);
    print(head3);
    print(head4);

}
