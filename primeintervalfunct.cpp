#include<iostream>
using namespace std;

int Prime(int x, int y, bool isPrime=1)
{
    for(int i=x;i<y;i++)
    {
        if(i%2!=0)
        {
            if(isPrime==1){
            cout<<i<<endl;
        }
    }
    
    
}
}


int main()
{
    int x;
    int y;
    cout<<"enter the intervals"<<endl;
    cin>>x>>y;
   

    cout<<Prime(x,y,1)<<endl;

}