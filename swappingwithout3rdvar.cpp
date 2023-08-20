#include<iostream>
using namespace std;

void swap(int &x, int &y)
{
    x = x ^ y;
    y = y ^ y;
    x = x ^ y;
}

int main()
{
    int a = 6;
    int b = 7;
    cout<<"before swapping"<<" "<<a<< " "<<b<<endl;
    swap(a,b);
    cout<<"after swapping"<<" "<<a<<" "<<b<<endl;
    return 0 ;

}