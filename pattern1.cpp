#include<iostream>
using namespace std;

int main()
{
    int n;
    cout<<"enter no. of rows"<<endl;
    cin>>n;

    int i=1;  // ye row 1  se start ho raha hai
    while(i<=n)
    {
        int j=1;  // ye column hai jo 1 se start ho raha hai
        while(j<=n)
        {
            cout<<"*";
            j++;
        }
        cout<<endl;
        i++;
    }
    return 0;
}

// is case me jitne number of rows the utne number of columns the.