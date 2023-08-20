#include<iostream>
using namespace std;

int main()
{
    int n1,n2,n3;
    cout<<"enter 3 numbers"<<endl;
    cin>>n1>>n2>>n3;
    int largest,second_largest;

    if(n1>n2 && n1>n3)
    {
            largest = n1;
            if(n2>n3)
            {
                second_largest = n2;
            }
            else{
                largest = n3;
            }
    }
    else if(n2>n1 && n2>n3)
    {
        largest = n2;
        if(n1>n3)
        {
            second_largest = n1;
        }
        else{
            largest = n3;
        }
    }else{
        largest = n3;
        if(n1>n2)
        {
            second_largest = n1; 
        }
        else{
            second_largest = n2;
        }
    }

    cout<<"largest number is"<<" "<<largest<<endl;
    cout<<"second largest number is"<<" "<<second_largest<<endl;
    return 0;    
}