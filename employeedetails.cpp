#include<iostream>
using namespace std;

int main()
{
    int empno,empaddress,phonenumber;
    char empname;

    cout<<"enter employee details"<<endl;
    cin>>empname>>empno>>empaddress>>phonenumber;

    cout<<"employee name is:"<<" "<<empname<<endl;
    cout<<"employee number is:"<<" "<<empno<<endl;
    cout<<"employee address is:"<<" "<<empaddress<<endl;
    cout<<"employee phone number is:"<<" "<<phonenumber<<endl;

    return 0;
}