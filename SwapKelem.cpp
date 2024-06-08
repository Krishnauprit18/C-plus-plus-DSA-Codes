#include<iostream>
using namespace std;

void swapKth(int *arr, int n, int k)
{
        int temp;
        int temp_1;

        for(int i = 0; i < n ;i++){
            if((i + 1) == k){
                temp = arr[i];
            }
        }

        for(int i = n-1; i >= 0; i--){
            if(i == (n - k)){
                temp_1 = arr[i];
                arr[i] = temp;
            }
        }

        for(int i = 0; i < n; i++){
            if((i + 1) == k){
                arr[i]  = temp_1;
            }
        }
}

int main() {
    int n = 8;
    int k = 3;
    int arr[] = {1, 2, 3, 4, 5, 6, 7, 8};

    cout << "Original Array: ";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    swapKth(arr, n, k);

    cout << "Modified Array: ";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}
