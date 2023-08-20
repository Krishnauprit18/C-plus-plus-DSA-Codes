#include<iostream>
using namespace std;

int binarySearch(int arr[],int size, int key)
{
    int start = 0;
    int end = size-1;
    int mid = start+((end - start)/2);
    while(start<=end)
    {
        if(arr[mid] == key)
        {
            return mid;
        }
        // go to right part:
        if(key>arr[mid])
        {
            start = mid + 1;
        }
        else{
            end = mid - 1;
        }
        mid = (start + end)/2;
    } 
    return -1;   
}


int main()
{
    int arr1[10] = { 34,56,43,1,2,4,35,89,78,90};
    int arr2[5] = { 3,6,78,34,7};

    int index = binarySearch(arr1,10,43);
    cout<<"index of 43 is "<<" "<<index<<endl;
    return 0;

}