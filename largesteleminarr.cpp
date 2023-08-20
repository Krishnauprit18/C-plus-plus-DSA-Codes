#include<iostream>
using namespace std;

int maxelem(int arr[],int n, int i)
{
    if(i=n-1)
    {
        return arr[i];
    }
    int Maxrec=maxelem(arr,n,i+1);
    return max(Maxrec,arr[i]);
}
int main()
{
    int arr[]={2,6,3,5,5,8,7,3};
    int n = sizeof(arr)/sizeof(arr[0]);
    cout<<"maximum element is"<<" "<<maxelem(arr,n,0);
    return 0;
}