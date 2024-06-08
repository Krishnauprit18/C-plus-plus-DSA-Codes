// Using Loops:

#include<iostream>
using namespace std;

int main()
{
    int original_arr[] = {4,3,5,6,7,8};
    int copied_arr[6];

    cout<<"Elements of original array are: "<<endl;

    for(int i = 0; i<6; i++)
    {
        cout<<original_arr[i]<<" ";
    }
    cout<<endl;

    for(int i = 0; i<6; i++)
    {
        copied_arr[i] = original_arr[i];
    }

    cout<<"Elements of Copied array are: "<<endl;


    for(int i = 0; i<6; i++)
    {
        cout<<copied_arr[i]<<" ";
    }

    return 0;
}
