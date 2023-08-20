#include<iostream>
#include<cmath>
using namespace std;

int main()
{
    double a,b,c;
    cout<<"enter the coefficients of a,b,c of the quadractic equation(ax^2+bx+c=0)"<<endl;
    cin>>a>>b>>c;

    double discriminent=pow(b,2)-4*a*c;

    if(discriminent>0)
    {
        double x1=(-b+sqrt(discriminent))/(2*a);
        double x2=(-b-sqrt(discriminent))/(2*a);
        cout<<"the roots of equatiion are"<<x1<<" "<<x2<<endl;
    }else if(discriminent==0)
    {
         double x=(-b)/(2*a);
         cout<<"the root of equation is"<<x<<endl;
    }
    else{
        cout<<"the equation has no real roots"<<endl;
    }
    return 0;
}