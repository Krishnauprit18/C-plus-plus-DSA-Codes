#include<iostream>
using namespace std;

bool Prime(int x)
{
  
    if(x%2!=0)
    {
        cout<<"is  a prime number"<<endl;
        return 1;
    }
    else{
        cout<<"is not a prime number"<<endl;
    
    return 0;
    }
}
int main()
{
    int x;
    cout<<"enter the number to check"<<endl;
    cin>>x;
    cout<<Prime(x)<<endl;

}