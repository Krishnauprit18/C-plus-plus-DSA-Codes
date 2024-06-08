#include<iostream>
using namespace std;

int findSmallestCount(int arr[], int X, int N)
{
    int left = 0;
    int right = N-1;
    int cnt = 0;

    while(left <= right)
    {
        int mid = left+(right - left) / 2;

        if(arr[mid] <= X)
        {
            cnt = mid+1;
            left = mid+1;
        }
        else
        {
            right = mid - 1;
        }
    }

    return cnt;
}

int main()
{
    int N;
    int X;

    cout << "Enter the size of the array: ";
    cin >> N;

    int Arr[N];
    cout << "Enter the elements of the sorted array:" << endl;

    for (int i = 0; i < N; i++)
    {
        cin >> Arr[i];
    }

    cout << "Enter the value of X: ";
    cin >> X;

    int smallerCnt = findSmallestCount(Arr, N, X);
    int largerCnt = N - smallerCnt;

    cout << "Number of elements less than or equal to " << X << ": " << smallerCnt << endl;
    cout << "Number of elements more than or equal to " << X << ": " << largerCnt << endl;

    return 0;
}
