#include<iostream>
using namespace std;

int main()
{
    int n,dig=0,rev=0;
   
    cin>>n;

    cout<<"initially the number is"<<" "<<n<<endl;

    while(n!=0)
    {
        dig=n%10;
        rev=rev*10+dig;
        n=n/10;
        
    }
    cout<<"the reversed number is"<<" "<<rev<<endl;
    return 0;
}