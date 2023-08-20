#include<iostream>
using namespace std;

void reverseString(char *str)
{
    if(*str == '\0')
    {
        return ;
    }
    else{
        reverseString(str + 1);
        cout<<*str;
    }
}

int main()
{
    char originalString[] = "Hello Krishna";
    cout<<"Original String"<<" "<<originalString<<endl;
    cout<<"Reverse String"<<endl;
    reverseString(originalString);
    return 0;
}