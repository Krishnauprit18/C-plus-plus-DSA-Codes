// printing prime numbers between 2 intervals

#include<iostream>
using namespace std;

int main()
{
    int x,y;
    cout<<"enter the intervals"<<endl;
    cin>>x>>y;

    for(int i=x;i<=y;i++)
    {
        if(i%2!=0)
        {
            cout<<i<<endl;
        }
    }
    return 0;
}