#include<iostream>
using namespace std;

int main()
{
    int n;
    cout<<"enter thr number"<<endl;
    cin>>n;

    int i=1;
    char value = 'A';
    while(i<=n)
    {
        int j=1;
        
        while(j<=n)
        {
            cout<<value<<" ";
            value++;
            j++;
        }
        cout<<endl;
        i++;
    }
}