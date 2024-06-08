#include <iostream>
using namespace std;

int main()
{

    int choice;
    cout << "Enter Choice for Matrix Operations: " << endl;
    cout << "1. Addition" << endl;
    cout << "2. Subtraction" << endl;
    cout << "3. Multiplication" << endl;
    cout << "4. Transpose" << endl;
    cout << "5. Invalid Choice" << endl;
    cout << "Enter your choice (1-5): ";
    cin >> choice;

    int rows, cols;

    cout << "Enter number of rows: ";
    cin >> rows;
    cout << "Enter number of columns: ";
    cin >> cols;

    int matrix1[rows][cols], matrix2[rows][cols], result[rows][cols];

    switch (choice)
    {
        //Addition:-
        case 1:
            cout << "Enter elements of first matrix:" << endl;
            for (int i = 0; i < rows; ++i) {
                for (int j = 0; j < cols; ++j) {
                    cin >> matrix1[i][j];
                }
            }

            cout << "Enter elements of second matrix:" << endl;
            for (int i = 0; i < rows; ++i) {
                for (int j = 0; j < cols; ++j) {
                    cin >> matrix2[i][j];
                }
            }
            for (int i = 0; i < rows; ++i) {
                for (int j = 0; j < cols; ++j) {
                    result[i][j] = matrix1[i][j] + matrix2[i][j];
                }
            }
            cout << "Resultant matrix after addition:" << endl;
            for (int i = 0; i < rows; ++i) {
                for (int j = 0; j < cols; ++j) {
                    cout << result[i][j] << " ";
                }
                cout << endl;
            }
            break;


        //Subtraction:-
        case 2:
            cout << "Enter elements of first matrix:" << endl;
            for (int i = 0; i < rows; ++i) {
                for (int j = 0; j < cols; ++j) {
                    cin >> matrix1[i][j];
                }
            }

            cout << "Enter elements of second matrix:" << endl;
            for (int i = 0; i < rows; ++i) {
                for (int j = 0; j < cols; ++j) {
                    cin >> matrix2[i][j];
                }
            }

             for (int i = 0; i < rows; ++i) {
                for (int j = 0; j < cols; ++j) {
                    result[i][j] = matrix1[i][j] - matrix2[i][j];
                }
            }

            cout << "Resultant matrix after subtraction:" << endl;
            for (int i = 0; i < rows; ++i) {
                for (int j = 0; j < cols; ++j) {
                    cout << result[i][j] << " ";
                }
                cout << endl;
            }
            break;


        //Multiplication:-
        case 3:
            cout << "Enter elements of first matrix:" << endl;
            for (int i = 0; i < rows; ++i) {
                for (int j = 0; j < cols; ++j) {
                    cin >> matrix1[i][j];
                }
            }

            cout << "Enter elements of second matrix:" << endl;
            for (int i = 0; i < rows; ++i) {
                for (int j = 0; j < cols; ++j) {
                    cin >> matrix2[i][j];
                }
            }


            for (int i = 0; i < rows; ++i) {
                for (int j = 0; j < cols; ++j) {
                    result[i][j] = 0;
                    for (int k = 0; k < cols; ++k) {
                        result[i][j] += matrix1[i][k] * matrix2[k][j];
                    }
                }
            }

            cout << "Resultant matrix after multiplication:" << endl;
            for (int i = 0; i < rows; ++i) {
                for (int j = 0; j < cols; ++j) {
                    cout << result[i][j] << " ";
                }
                cout << endl;
            }
            break;


        //Transpose:-
        case 4:
             cout << "Enter elements of the matrix:" << endl;
            for (int i = 0; i < rows; ++i) {
                for (int j = 0; j < cols; ++j) {
                    cin >> matrix1[i][j];
                }
            }

            for (int i = 0; i < rows; ++i) {
                for (int j = 0; j < cols; ++j) {
                    result[j][i] = matrix1[i][j];
                }
            }

            cout << "Transpose matrix:" << endl;
            for (int i = 0; i < cols; ++i) {
                for (int j = 0; j < rows; ++j) {
                    cout << result[i][j] << " ";
                }
                cout << endl;
            }
            break;

        default:
            cout << "Invalid choice." << endl;
            break;
    }

    return 0;
}

