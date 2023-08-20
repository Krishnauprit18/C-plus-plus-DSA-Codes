#include<iostream>
using namespace std;

void print(int *p)
{
    cout<<p<<endl;
}

int main()
{
     int n = 5;
     int *p = &n;
     cout<<*p<<endl;  // yaha value print hui 
     cout<<p<<endl;   // yaha address print hua us value ka.
     return 0;
}