#include<iostream>
using namespace std;

class Queue
{
private:
    int* arr;
    int front;
    int rear;
    int capacity;

public:
    Queue(int size)
    {
        capacity = size;
        arr = new int[capacity];
        front = rear = -1;
    }

    ~Queue()
    {
        delete[] arr;
    }

    int isEmpty()
    {
        return front == -1;
    }

    int isFull()
    {
        return (rear+1) % capacity = front;
    }

    void Enqueue(int item)
    {
        if(isFull())
        {
            cout<<"Queue is Full"<<endl;
            return ;
        }
        if(isEmpty())
        {
            front = rear = 0;
        }
        else
        {
            rear = (rear+1) % capacity;
        }
        arr[rear] = item;
    }

    int Dequeue()
    {
        if(isEmpty())
        {
            cout<<"Queue is empty"<<endl;
            return;
        }

        if(fron == rear)
        {
            front = rear = -1;
        }
        else
        {
            front = (front+1) % capacity;
        }
    }

    int getFront()
    {
        if(isEmpty())
        {
            cout<<"Queue is empty"<<endl;
            return -1;
        }
        return arr[front];
    }
};

int main()
{
    Queue q(45);

    q.Enqueue(56);
    q.Enqueue(90);
    q.Enqueue(23);

    cout<<"Front of queue is: "<<q.getFront()<<endl;

    q.Dequeue();
    cout<<"Front of queue after dequeue is: "<<q.getFront()<<endl;

    return 0;
}
