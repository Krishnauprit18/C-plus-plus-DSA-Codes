#include<iostream>
using namespace std;

const int max_size = 5;
int arr[max_size];
int top = -1;

class Stack
{
public:
    void push(int element)
    {
        if (top >= max_size - 1)
        {
            cout << "Stack overflow" << endl;
        }
        else
        {
            arr[++top] = element;
        }
    }

    void pop()
    {
        if (top == -1)
        {
            cout << "Stack underflow" << endl;
        }
        else
        {
            top--;
        }
    }

    int peek()
    {
        if (top == -1)
        {
            cout << "Stack is empty" << endl;
            return -1;
        }
        else
        {
            return arr[top];
        }
    }
};

int main()
{
    Stack new_stack;
    new_stack.push(34);
    new_stack.push(45);
    new_stack.push(23);

    cout << "Top element is: " << new_stack.peek() << endl;

    new_stack.pop();
    cout << "Popped element" << endl;

    return 0;
}
