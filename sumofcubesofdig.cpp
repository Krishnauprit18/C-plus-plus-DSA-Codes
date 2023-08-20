#include<iostream>
using namespace std;

int main()
{
    int n,sum = 0;
    cout<<"enter a 3 digit number"<<endl;
    cin>>n;

    while(n>0)
    {
        int digit = n%10;
        sum+=digit*digit*digit;
        n/=10;
    }
    cout<<"sum of cubes of digits are"<<" "<<sum<<endl;
    return 0;
}