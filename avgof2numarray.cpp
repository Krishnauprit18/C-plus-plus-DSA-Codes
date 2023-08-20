#include<iostream>
using namespace std;

int main()
{
    int arr[50], sum=0,avg=0,n;
    cout<<"enter number of data"<<endl;
    cin>>n;

    for(int i=0;i<=n;++i)
    {
        cout<<i+1<<"enter number:";
        cin>>arr[i];
        sum+=arr[i];
    }
    avg=sum/n;
    cout<<"average is"<<avg<<endl;
    return 0;
}