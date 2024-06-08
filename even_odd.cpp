#include<iostream>
using namespace std;

int main()
{
    int n;
    cout<<"Enter size: "<<endl;
    cin>>n;

    int arr[n];
    cout<<"Enter elem of arr: "<<endl;
    for(int i = 0; i<n; i++)
    {
        cin>>arr[i];
        cout<<endl;
    }

    cout<<endl;
    for(int i =0; i<n; i++)
    {
        if(arr[i] % 2 == 0)
        {
            cout<<arr[i]<<endl;
        }
    }
    else
    {
        cout<<"Not valid elem"<<endl;
    }


    return 0;
}
