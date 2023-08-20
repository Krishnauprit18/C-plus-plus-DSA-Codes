#include<iostream>
#include<cmath>
using namespace std;

int main()
{
    float val[5]= {10.5,11.7,12.6,14.3,13.6};
    float sum = 0,mean,variance=0.0,stdDeviation;

    for(int i=0;i<5;i++)
    {
        sum+=val[i];
        mean=sum/5;
    }
    for(int i=0;i<5;++i)
    {
        variance=variance/5;
        stdDeviation= sqrt(variance);
    }
    cout<<"the data values are"<<endl;
    for(int i=0;i<5;++i)
    {
        cout<<val[i]<<" "<<endl;
    }
    cout<<"standered deviation is"<<" "<<stdDeviation<<endl;
}