#include<iostream>
using namespace std;

int main()
{
    int n;
    cout<<"enter the number of rows and columns "<<endl;
    cin>>n;

    // creating a dynamic 2D array:

    int** arr = new int* [n];
    for(int i=0;i<n;i++)
    {
        arr[i] = new int[n];
    }
    // creation of 2D array done.

    // taking input:

    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            cin>>arr[i][j];
        }
    }

    // taking output:

    cout<<endl;

    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
             cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;
}