#include<iostream>
using namespace std;

int main()
{
    const int size_of_array = 50;
    int Array[size_of_array];

    for(int i =0; i < size_of_array; i++)
    {
        Array[i] = i+1;
    }

    cout<<"Alternate elements of array are: "<<endl;
    for(int i = 0; i < size_of_array; i+=2)
    {
        cout<<Array[i]<<" ";
    }

    cout<<endl;

    return 0;
}
