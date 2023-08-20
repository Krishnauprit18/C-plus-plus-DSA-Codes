#include<iostream>
using namespace std;

int main()
{
    int num ;
    cout << "Enter number: ";
    cin >> num;
    int a=1;
    int b=0;

    cout<<"First 2 numbers are: "<<a<<" "<<b<<endl;
    for(int i=1;i<=num;i++)
    {
        int nextNumber=a+b;
        a=b;
        b=nextNumber;
        cout<<nextNumber<<" ";

    }

    return 0;
}
