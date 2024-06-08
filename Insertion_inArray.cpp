#include<iostream>
using namespace std;

int main()
{
    int n;
    cout<<"Enter size of array: "<<endl;
    cin>>n;
    int arr[n];
    for(int i = 0; i<n ;i++)
    {
        cin>>arr[i];
    }

    int num;
    int pos;

    cout<<"Enter the elem. to be inserted and the position of insertion: "<<endl;
    cin>>num>>pos;

    for(int i = n-1; i>=pos-1; i--)
    {
        arr[i+1] = arr[i];
    }
    arr[pos-1] = num;

    for(int i = 0; i<n+1; i++)
    {
        cout<<arr[i]<<endl;
    }

    return 0;
}
