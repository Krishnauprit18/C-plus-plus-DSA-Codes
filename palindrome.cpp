#include<iostream>
using namespace std;

int main()
{
    int num, temp=0, dig=0, rev=0;              // Initializing all the required variables.
    cout<<"Enter the number: "<<endl;
    cin>>num;                                   // Taking input.

    cout<<"Initially the number is"<<" "<<num<<endl;    // Printing initial entered input.

    temp = num;                                 // storing the input in a new temp variable.

    // Logic Implementation:-
    while(num != 0)
    {
        dig = num % 10;
        rev = rev * 10 + dig;
        num = num / 10;
    }

    // Checking whether the number is palindrome or not.
    if(temp == rev)
    {
        cout<<"The number"<<" "<<rev<<" "<<"is a Plindrome"<<endl;
    }

    else
    {
        cout<<"The number is not a Palindrome"<<endl;
    }

    return 0;
}
