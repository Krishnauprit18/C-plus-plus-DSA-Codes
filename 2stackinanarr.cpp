#include<iostream>
#include<stack>

using namespace std;

class TwoStack{

        int *arr;
        int top1;
        int top2;
        int size;
    public:

    //initialize 2 stacks:
    TwoStack(int s)
    {
        this->size =s;
        top1 = -1;
        top2 = s;
        arr = new int[s];
    }

    //push in stack 1:
    void push1(int num)
    {
        // atleast an empty space:
        if(top2-top1>1)
        {
            top1++;
            arr[top1] = num;
        }
    }

    // push in stack 2:
    void push2(int num)
    {
        if(top2-top1>1)
        {
            top2--;
            arr[top2] = num;
        }
    }

    //pop from stack 1 and return popped element;
    int pop1()
    {
        if(top1>=0)
        {
            int ans = arr[top1];
            top1--;
            return ans;
        }
        else{
            return -1;
        }
    }

    // pop from stack 2 and return popped element:
    int pop2()
    {
        if(top2<size)
        {
            int ans = arr[top2];
            top2++;
            return ans;
        }
        else{
            return -1;
        }
    }






    
};