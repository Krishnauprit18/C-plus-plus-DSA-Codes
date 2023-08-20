#include<iostream>
using namespace std;

int main()
{
    int dividend,remainder,quotient,divisor;
    cout<<"enter dividend"<<endl;
    cin>>dividend;

    cout<<"enter divisor"<<endl;
    cin>>divisor;

    quotient=dividend/divisor;
    remainder=dividend%divisor;

    cout<<"quotient is"<<quotient<<endl;
    cout<<"remainder is"<<remainder<<endl;
    
    return 0;
}