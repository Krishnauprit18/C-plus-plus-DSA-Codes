#include<iostream>
using namespace std;

int gcdrecur(int x, int y)
{
    if(x%y==0)
    {
        return y;
    }
    else{
        return gcdrecur(y,x%y);
    }
}

int main()
{
    int a=32, b=48;
    
    cout<<gcdrecur(a,b)<<endl;
    return 0;
}