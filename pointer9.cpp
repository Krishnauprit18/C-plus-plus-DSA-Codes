#include<iostream>
using namespace std;

int main()
{
    int n=5;
    int *p = &n;
    int **p2 = &p;

    cout<<p<<endl;
    cout<<&p<<endl;
    cout<<*p2<<endl;
    cout<<*p<<endl;
    cout<<n<<endl;
}