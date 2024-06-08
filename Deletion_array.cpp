#include<iostream>
using namespace std;

int main()
{
    int n;
    cout<<"Enter size: "<<endl;
    cin>>n;

    int arr[n];
    int pos;
    int num;
    cout<<"Enter elements of array: "<<endl;

    for(int i = 0; i<n ;i++)
    {
        cin>>arr[i];
    }

    cout<<"Enter the position of the element to be deleted: "<<endl;
    cin>>pos;for(int i = pos-1; i<n; i++)
    {
        arr[i] = arr[i+1];
    }

    cout<<"The array after deletion is: "<<endl;
    for(int i = 0; i<n-1; i++)
    {
        cout<<arr[i]<<endl;
    }

    return 0;
}
