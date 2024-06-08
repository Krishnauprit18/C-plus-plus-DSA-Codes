#include<iostream>
using namespace std;

int main()
{
    int n;
    cout<<"Enter size"<<endl;
    cin>>n;

    int arr[n];
    cout<<"Enter elemtns of array: "<<endl;
    for(int i = 0; i<n; i++)
    {
        cin>>arr[i];
    }

    int min = arr[0];
    for(int i = 0; i<n; i++)
    {
        if(arr[i] < min)
        {
            min = arr[i];
        }

    }

    int min_1 = arr[min];
    for(int i = 0; i<n; i++)
    {
        if(arr[min] > min_1)
        {
            min_1 = arr[min];
        }

    }


    cout<<"Minimum element is: "<<min<<endl;
    cout<<"Minimum element is: "<<min_1<<endl;
    return 0;
}
