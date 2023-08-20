#include<iostream>
using namespace std;

int main()
{
    int n,d,temp=0,cube=1,sum=0;
    cout<<"enter the number"<<endl;
    cin>>n;

    temp=n;
    while(n!=0)
    {
        d=n%10;
        cube=d*d*d;
        sum+=cube;
        n/=10;
    }
    if(temp==sum)
    {
        cout<<"it is an armstrong number"<<endl;
    }
    else{
        cout<<"it is not an armstrong number"<<endl;
    }
    return 0;
}