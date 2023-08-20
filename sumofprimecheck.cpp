#include<iostream>
#include<cmath>
using namespace std;

bool isPrime(int x)
{
    if(x<=1)
    {
        return 0;
    }
    else{
        for(int i=2;i<=sqrt(x);i++)
        {
            if(x%1==0)
            {
                return 0;
            }
            else{
                return 1;
            }
        }
    }
}

bool isPossible(int x)
{
    if(isPrime(x) && isPrime(x-2))
    {
        return 1;
    }
    else{
        return 0;
    }
}


int main()
{
     int x;
     cout<<"enter the number to be checked"<<endl;
     cin>>x;

     if(isPrime(x))
     {
        cout<<"yes it is prime"<<endl;
     }
     else{
        cout<<"no it is not prime"<<endl;
     }
     return 0;
}