#include<iostream>
using namespace std;

int main()
{
    int arr[5] = {1,5,3,6,8,};
    int *ptr = arr;
   
    int newarr[5];
    int *newptr = newarr;
   

    for(int i=0;i<5;i++)
    {
        *newptr = *ptr;
        *ptr++;
        *newptr++;
    }
      
      cout<<"new array is:"<<endl;
    for(int i=0;i<5;i++)
    {
        cout<<newarr[i]<<" ";
    }
    return 0;

}