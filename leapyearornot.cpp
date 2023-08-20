#include<iostream>
using namespace std;

int main()
{
    int yr;
    cout<<"enter the year to check"<<endl;
    cin>>yr;

    if(yr%4==0)
    {
        cout<<"it is a leap year"<<endl;
    }
    else
    {
        cout<<"it is not a leap year"<<endl;
    }
    return 0;
}