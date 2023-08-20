#include<iostream>
using namespace std;

int main()
{
    char ch[10] = "krishna";
    cout<<ch<<endl;

    // if:
    char *c = &ch[0];
    cout<<c<<endl;  // prints entire string.

    char temp = 'z';
    char *p = &temp;

    cout<<p<<endl;
    
}