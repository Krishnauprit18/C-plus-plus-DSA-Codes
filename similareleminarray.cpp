#include<iostream>
using namespace std;

int main()
{
    int arr[] = {2,4,9,6,3,4,5,1};
    int n = sizeof(arr)/sizeof(arr[0]); // number of element in an array.
    int count = 0;   // it is a variable to keep track of times element occures.

    for(int i=0;i<n;i++)
    {
        count = 1; // reset count for each element.

        for(int j = i+1;j<n;j++)
        {
            if(arr[i]==arr[j])
            {
                count++;
            }
        }
        if(count>1)
        { 
            // only prints if element occures more than once.

            cout<<"element"<<" "<<arr[i]<<" "<<"occurs"<<" "<<count<<" "<<"times"<<endl;
        }
    }
    return 0;
}

