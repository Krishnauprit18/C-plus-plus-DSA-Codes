#include <iostream>
using namespace std;

int main() {
    int rows, cols;
    cout << "Enter the number of rows: ";
    cin >> rows;
    cout << "Enter the number of columns: ";
    cin >> cols;

    int matrix[100][100];
    int columnSum[100] = {0};

    cout << "Enter the matrix elements:" << endl;
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            cin >> matrix[i][j];
            columnSum[j] += matrix[i][j];
        }
    }

    cout << "Sum of each column:" << endl;
    for (int j = 0; j < cols; j++) {
        cout << "Column " << j + 1 << ": " << columnSum[j] << endl;
    }

    return 0;
}
