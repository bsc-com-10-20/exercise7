#include <iostream>
#include <string>

using namespace std;

int main() {
    // Dynamically allocate an integer
    int* dynamicInt = new int;

    // Dynamically allocate a string
    string* dynamicString = new string;

    // Prompt the user to input an integer value
    cout << "Enter an integer value: ";
    cin >> *dynamicInt;

    // Prompt the user to input a string value
    cout << "Enter a string value: ";
    cin.ignore(); // Ignore any previous newline character in the input buffer
    getline(cin, *dynamicString);

    // Output the values of the dynamically allocated integer and string
    cout << "\nDynamically allocated integer value: " << *dynamicInt << endl;
    cout << "Dynamically allocated string value: " << *dynamicString << endl;

    // Free the dynamically allocated memory
    delete dynamicInt;
    delete dynamicString;

    return 0;
}
