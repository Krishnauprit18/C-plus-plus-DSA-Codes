#include <iostream>
using namespace std;

int main() {
    int rows, cols;

    cout << "Enter the number of rows: ";
    cin >> rows;
    cout << "Enter the number of columns: ";
    cin >> cols;

    int arr[rows][cols];

    cout << "Enter the elements of the 2D array:" << endl;
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            cout << "arr[" << i << "][" << j << "]: ";
            cin >> arr[i][j];
        }
    }

    int column;
    cout << "Enter the column number (0 to " << (cols - 1) << ") to calculate the sum: ";
    cin >> column;

    int sum = 0;
    for (int i = 0; i < rows; i++) {
        sum += arr[i][column];
    }

    cout << "Sum of elements in column " << column << ": " << sum << endl;

    return 0;
}
