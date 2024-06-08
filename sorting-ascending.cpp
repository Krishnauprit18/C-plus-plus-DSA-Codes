#include<iostream>
using namespace std;

int main()
{

    int n;
    cout<<"Enter n"<<endl;
    cin>>n;
    int arr[n];
    cout<<"Enter elements"<<endl
    ;
    for(int i =0; i<n; i++)
    {
        cin>>arr[i];
    }
    for(int i =0; i<n; i++)
    {
        for(int j =i+1; j<n; j++)
        {
            if(arr[i]>arr[j])
            {
                int temp;
                temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }

    cout<<"the sorted array is: "<<endl;
    for(int i =0; i<n; i++)
    {
        cout<<arr[i]<<endl;
    }

    return 0;
}
