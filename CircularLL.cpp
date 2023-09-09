#include<iostream>
using namespace std;

class Node{

    public:
    int data;
    Node* next;

    //constructor:

    Node(int d)
    {
            this->data = d;
            this->next = NULL;
    }

    //destructor:
    ~Node()
    {
            int value = this->data;
            if(this->data != NULL)
            {
                delete next;
                next =  NULL;
            }
          cout<<"memory free for node with data"<<" "<<value<<endl;
    }
    

};




// insert at tail:
void insertAtNode(Node* &tail, int element, int d)
{
    // assumig that the element is present in the list.

    //empty list:
    if(tail == NULL)
    {
        Node* newNode = new Node(d);
        tail = newNode;
        newNode->next = newNode;
    }
    else{
        // non empty list.
        // assuming that the element is present in the list.

        Node* curr = tail;

        while(curr->data != element)
        {
                curr = curr->next;
        }

        // element found-> current is representing element wala node.
        Node* temp = new Node(d);
        temp->next = curr->next;
        curr->next = temp;
    }
}



void print(Node* tail)
{
    Node* temp = tail;

    do{
        cout<<tail->data<<" ";
        tail = tail->next;
    }while(tail!=temp);
    cout<<endl;
}



//deletion:

void deleteNode(Node* tail, int value)
{
    //empty list:
    if(tail == NULL)
    {
        cout<<"list is empty"<<endl;
    }
    else
    {
        // non empty:

        //assuming that "value" is present in LL:
        Node* prev = tail;
        Node* curr = prev->next;

        while(curr->data!=value)
        {
                prev = curr;
                curr = curr->next;
        }

        prev->next = curr->next;
        if(tail == curr)
        {
            tail = prev;
        }
        curr->next = NULL;
        delete curr;
     }
}







int main()
{
    Node* tail = NULL;

    insertAtNode(tail,5,3);
    print(tail);

    insertAtNode(tail,3,5);
    print(tail);

    insertAtNode(tail,5,7);
    print(tail);

    deleteNode(tail,3);
    print(tail);
    return 0;
}









