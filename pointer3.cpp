#include<iostream>
using namespace std;

int main()
{
    // pointer to int is created and is pointing to some garbage address.

/*int *p=0;
cout<<*p<<endl;*/

// ways to initialize pointer:

int n = 5;
int *q = &n;
cout<<q<<endl;
cout<<*q<<endl;
*q++;
cout<<*q<<endl;
return 0;
}

