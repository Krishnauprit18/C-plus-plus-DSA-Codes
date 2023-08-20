#include<iostream>
using namespace std;

// difference between pointer and array:

int main()
{
    int arr[10] = {23,56,4,32};
    int temp[10];
    cout<<sizeof(temp)<<endl;

    // now:

    int *ptr = &temp[0];
    cout<<sizeof(&ptr)<<endl;
    cout<<sizeof(*ptr)<<endl;
    return 0;
}