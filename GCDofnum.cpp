#include<iostream>
using namespace std;

int main()
{
    int n,divisor=0,temp=0;
    cout<<"enter number"<<endl;
    cin>>n;
    temp=n;
    for(int i=2;i<n;i++)
    {
        if(n%i==0)
        {
            if(divisor<=i)
            {
                divisor=i;
            }
        }
    }
    cout<<"the gcd of a number"<<" "<<temp<<" "<<"is"<<" "<<divisor<<endl;
    
        
    return 0;

}