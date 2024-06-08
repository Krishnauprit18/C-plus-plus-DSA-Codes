#include<iostream>
using namespace std;

bool isPerfect(int arr[], int num)
{
    for(int i = 0; i < num; i++)
    {
        if(arr[i] != arr[num-i-1])
        {
            return false;
        }
    }
    return true;
}

int main() {
    int n;
    cout << "Enter the size of the array: ";
    cin >> n;

    int arr[n];
    cout << "Enter the elements of the array: ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    if (isPerfect(arr, n)) {
        cout << "Array is Perfect" << endl;
    } else {
        cout << "Array is not Perfect" << endl;
    }

    return 0;
}
