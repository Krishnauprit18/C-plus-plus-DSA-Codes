#include<iostream>
using namespace std;

int main()
{
    // pointer arithmatic operation:
    
    int i=3;
    int *t = &i;
    cout<<*t<<endl;
    *t=*t+1;
    cout<<*t<<endl;
    return 0;
}