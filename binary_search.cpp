#include<iostream>
using namespace std;

int main()
{
    int n;
    cout<<"Enter size of arr: "<<endl;
    cin>>n;
    int arr[n];
    int high = n-1;
    int low = 0;
    int key;
    cout<<"Enter elements in array: "<<endl;
    for(int i = 0; i<n; i++)
    {
        cin>>arr[i];
    }

    cout<<"Enter element to search for"<<endl;
    cin>>key;


    int mid = (low+high) / 2;

    while(low <= high)
    {
        if(arr[mid] < key)
        {
            low = mid+1;
        }
        else if(arr[mid] == key)
        {
            cout<<"Element found: "<<mid + 1<<endl;
            break;
        }
        else
        {
            high = mid-1;
        }
        if(low > high)
        {
            cout<<"Elemenet not found: "<<endl;
        }
        mid = (low+high) / 2;
    }

    return 0;
}
