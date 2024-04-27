#include <iostream>

using namespace std;

int main() {
    // Declare variables to store dimensions
    int rows, columns;

    // Prompt the user to input dimensions
    cout << "Enter the number of rows (maximum 3): ";
    cin >> rows;

    // Check if the number of rows exceeds 3
    if (rows > 3) {
        cout << "Error: Number of rows cannot exceed 3." << endl;
        return 1;
    }

    cout << "Enter the number of columns (maximum 3): ";
    cin >> columns;

    // Check if the number of columns exceeds 3
    if (columns > 3) {
        cout << "Error: Number of columns cannot exceed 3." << endl;
        return 1;
    }

    // Dynamically allocate a 2D array of doubles
    double** arr = new double*[rows];
    for (int i = 0; i < rows; ++i) {
        arr[i] = new double[columns];
    }

    // Prompt the user to input values for each element of the array
    cout << "Enter values for the array:" << endl;
    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < columns; ++j) {
            cout << "Element [" << i << "][" << j << "]: ";
            cin >> arr[i][j];
        }
    }

    // Output values of each element of the array
    cout << "\nValues of the array:" << endl;
    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < columns; ++j) {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }

    // Deallocate memory for the 2D array
    for (int i = 0; i < rows; ++i) {
        delete[] arr[i];
    }
    delete[] arr;

    return 0;
}
