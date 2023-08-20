#include<iostream>
using namespace std;

int main()
{
    char ch;
    cout<<"enter the character to check"<<endl;
    cin>>ch;

    if(ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u')
    {
        cout<<"the character is vowel"<<endl;
    }
    else{
        cout<<"the character is consonent"<<endl;
    }
    return 0;
}