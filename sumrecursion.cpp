#include<iostream>
using namespace std;

int sumrecur(int x)
{
    if(x<=1)
    {
        return x;
    }
    else{
        return (x)+sumrecur(x-1);
    }
}

int main()
{
    int x;
    cout<<"enter the number of natural numbers"<<endl;
    cin>>x;
    cout<<sumrecur(x)<<endl;

    return 0;
}
