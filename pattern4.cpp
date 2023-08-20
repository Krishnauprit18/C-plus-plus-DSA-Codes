#include<iostream>
using namespace std;

int main()
{
    int n;
    cout<<"enter the number"<<endl;
    cin>>n;

    // traversing on all rows
    int row=1;
    while(row<=n)
    {
        int col=1;
        while(col<=row)   // the inner loop will run from 1 to row.
        {
            cout<<"*";
            col++;
        }
        cout<<endl;
        row++;
    }
}