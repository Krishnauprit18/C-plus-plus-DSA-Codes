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

    int max = arr[0];
    for(int i = 0; i<n; i++)
    {
        max = arr[i];
    }

    cout<<"Maximum element is: "<<max<<endl;
    return 0;
}
