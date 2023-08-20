#include<iostream>
using namespace std;

int main()
{
    int n;
    long fact=1;
    cout<<"enter the number"<<endl;
    cin>>n;

    if(n<0)
    {
        cout<<"factorial of negative number is not possible"<<endl;
    }
    else{
        for(int i=1;i<=n;i++)
        {
            fact*= i;

        }
          cout<<"factorial is"<<fact<<endl;
    }
    return 0;
}
