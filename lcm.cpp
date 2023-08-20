#include<iostream>
using namespace std;

int lcm(int a, int b)
{  
     int commonMultiple;
    commonMultiple=0;
    commonMultiple+=b;

    if((commonMultiple%a==0)&&(commonMultiple%b==0))
    {
        return commonMultiple;
    }
    else{
        return lcm(a,b);
    }
}

int main()
{
  int a,b;
  cout<<"enter 2 numbers"<<endl;
  cin>>a>>b;
  cout<<"the lcm of"<<a<<" "<<"is"<<" "<<"and"<<" "<<b<<"is"<<" "<<lcm(a,b)<<endl;
  return 0;
}