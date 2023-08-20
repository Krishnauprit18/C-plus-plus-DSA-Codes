#include<iostream>
using namespace std;

int main()
{
    int n,fact=0,x=1;
    cout<<"enter the number"<<endl;
    cin>>n;

    int num=n;
    while(x<=n)
    {
        if(n%x==0)
        {
            fact=n/x;
            cout<<fact<<" ";
        
    
    
         if(fact!=x)
        {
            cout<<x<<" ";
        }
    }
        x++;
    }
        
    
    
     
    return 0;
}

