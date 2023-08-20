#include<iostream>
using namespace std;

int main()
{
    int x,y;
    cout<<"enter the value of x"<<endl;
    cin>>x;
    cout<<"enter the value ofy"<<endl;
    cin>>y;

    char op;
    cout<<"enter the operation to perform"<<endl;
    cin>>op;

    switch(op)
    {
        case '+': cout<<(x+y)<<endl;
                break;
        case '-': cout<<(x-y)<<endl;
            break;
        case '*': cout<<(x+y)<<endl;
                break;
        case '/': cout<<(x+y)<<endl;
                break;
        case '%': cout<<(x+y)<<endl;
                break;
        default: cout<<"syntax error"<<endl;
                break;
    }
    cout<<endl;
}