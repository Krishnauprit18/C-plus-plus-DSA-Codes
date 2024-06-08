#include<iostream>
#include<vector>
using namespace std;

vector<int> valueEqualToIndex(int arr[], int n)
{
    vector<int> result;

    for(int i = 0; i < n; i++)
    {
        if(arr[i] == i+1)
        {
            result.push_back(i+1);
        }
    }

    return result;
}


int main()
{
    int n;
    cout << "Enter the size of the array: ";
    cin >> n;

    int arr[n];
    cout << "Enter the elements of the array: ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    vector<int> result = valueEqualToIndex(arr, n);

    if (result.empty()) {
        cout << "No such elements found." << endl;
    } else {
        cout << "Elements whose value is equal to their index: ";
        for (int i = 0; i < result.size(); i++) {
            cout << result[i] << " ";
        }
        cout << endl;
    }

    return 0;
}
