#include<iostream>
using namespace std;

int main()
{
    char ch;
    cout<<"enter the character"<<endl;
    cin>>ch;

    int asciiValue=static_cast<int>(ch);
    cout<<"the ascii value of"<<" "<<ch<<" "<<"is"<<" "<<asciiValue<<endl;
    return 0;
}