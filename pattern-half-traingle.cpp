#include<iostream>
using namespace std;

int main()
{
    int i;
    int j;
    int n;
    int k;
    cout<<"Enter the number of lines:"<<endl;
    cin>>n;

    for(int i =0; i<=n; i++)
    {
        for(int j = 1; j<=n-i; j++)
        {
            cout<<" ";
        }
    }
    for(int k = 0; k<=j; k++)
    {
        cout<<"*";
    }
    cout<<endl;
    return 0;
}
