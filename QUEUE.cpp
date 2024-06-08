#include <iostream>
using namespace std;

class CircularQueue {
private:
    int *arr;
    int front, rear, size;

public:
    CircularQueue(int size) {
        this->size = size;
        arr = new int[size];
        front = rear = -1;
    }

    bool isFull() {
        return (front == 0 && rear == size - 1) || (rear == front - 1);
    }

    bool isEmpty() {
        return front == -1;
    }

    void enqueue(int item) {
        if (isFull()) {
            cout << "Queue is full. Cannot enqueue." << endl;
        } else {
            if (front == -1)
                front = 0;
            rear = (rear + 1) % size;
            arr[rear] = item;
            cout << "Enqueued: " << item << endl;
        }
    }

    void dequeue() {
        if (isEmpty()) {
            cout << "Queue is empty. Cannot dequeue." << endl;
        } else {
            cout << "Dequeued: " << arr[front] << endl;
            if (front == rear)
                front = rear = -1;
            else
                front = (front + 1) % size;
        }
    }

    void display() {
        if (isEmpty()) {
            cout << "Queue is empty." << endl;
        } else {
            cout << "Queue elements: ";
            int i = front;
            while (true) {
                cout << arr[i] << " ";
                if (i == rear)
                    break;
                i = (i + 1) % size;
            }
            cout << endl;
        }
    }

    ~CircularQueue() {
        delete[] arr;
    }
};

int main() {
    int size, choice, item;
    cout << "Enter the size of the circular queue: ";
    cin >> size;

    CircularQueue cq(size);

    do {
        cout << "Circular Queue Operations:" << endl;
        cout << "1. Enqueue" << endl;
        cout << "2. Dequeue" << endl;
        cout << "3. Display" << endl;
        cout << "4. Exit" << endl;
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
            case 1:
                cout << "Enter the item to enqueue: ";
                cin >> item;
                cq.enqueue(item);
                break;
            case 2:
                cq.dequeue();
                break;
            case 3:
                cq.display();
                break;
            case 4:
                cout << "Exiting program." << endl;
                break;
            default:
                cout << "Invalid choice. Try again." << endl;
        }
    } while (choice != 4);

    return 0;
}

