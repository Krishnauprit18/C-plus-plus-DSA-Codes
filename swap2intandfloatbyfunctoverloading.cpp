#include<iostream>
using namespace std;

// function to swap integers

void swap(int &x, int &y)
{
    int temp = x;
    x = y; 
    y = temp;
}
     
     // function to swap floats

void swap(float &x, float &y)  // here function is overloaded.
{
    float temp = x;
    x = y;
    y = temp;
}

int main()
{
    int a = 5;
    int b = 6;

    float c = 8.6;
    float d = 4.7;
     

    // swapping integer
    swap(a,b);
    cout<<"after swapping"<<" "<<a<<" "<<b<<endl;
    
    // swapping floats
    swap(c,d);
    cout<<"after swapping"<<" "<<c<<" "<<d<<endl;

    return 0;
}