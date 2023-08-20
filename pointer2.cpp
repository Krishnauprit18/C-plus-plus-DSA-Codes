#include<iostream>
using namespace std;

int main()
{
    int n = 5;
    cout<<n<<endl;

// basically pointer us variable ke address ko store karane ka kaam karta hai.
 // represented as:-- int *ptr = &n.
 // accessing pointer:

int *p = &n;

cout<<*p<<endl;  // '*'--> ye dereference operator hai. and ye 5 print kar raha hai.

cout<<&n<<endl; // address of n print kara in hexadecimal format.

// address print karane ka doosra tarika:-

cout<<p<<endl; // '*'--> ise agar nahi lagaya to address print ho gaya n ka.
 
// size of pointer:

cout<<"size of int"<<" "<<sizeof(n)<<endl;
cout<<"size of pointer"<<" "<<sizeof(p)<<endl;

}