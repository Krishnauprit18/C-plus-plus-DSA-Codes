#include<iostream>
using namespace std;
 
 // yaha hum heap memory allocation se sum karenge:

 int getSum(int *arr, int n)
 {
    int sum = 0;
    for(int i=0;i<n;i++)
    {
        sum+=arr[i];
    }
    return sum;
 }
 int main()
 {
    int n;
    cout<<"number of elements"<<endl;
    cin>>n;
    
    // creating a variable size array:
    int *arr = new int[n];

    // taking input in this array:

    cout<<"enter the elements in an array"<<endl;
    
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    int ans = getSum(arr,n);
    cout<<"answer is: "<<" "<<ans<<endl;
    return 0;
 }
