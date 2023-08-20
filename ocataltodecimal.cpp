#include<iostream>
using namespace std;

int octaltodecimal(int n)
{
  int num = n;
  int decimalvalue = 0;
  int base = 1;
  int temp = num;

  while(temp)
  {
    int lastdigit = temp%10;
    temp /= 10;

    decimalvalue+=lastdigit*base;
    base*=8;
    return decimalvalue;
  }
}

int main()
{
    int n;
    cout<<"enter the number"<<endl;
    cin>>n;

    cout<<octaltodecimal(n)<<endl;
    return 0;
}