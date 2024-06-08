#include <iostream>
using namespace std;

// Function to find the largest element in a 2D array
int findLargest(int arr[][3], int rows, int cols) {
    int largest = arr[0][0];  // Initialize largest with the first element

    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            if (arr[i][j] > largest) {
                largest = arr[i][j];
            }
        }
    }

    return largest;
}

int main() {
    int rows = 3;
    int cols = 3;
    int myArray[3][3] = {{5, 12, 8}, {6, 11, 2}, {7, 9, 4}};

    int largestElement = findLargest(myArray, rows, cols);
    cout << "The largest element in the 2D array is: " << largestElement << endl;

    return 0;
}
