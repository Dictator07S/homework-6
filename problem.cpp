#include <iostream>

using namespace std;

int main() {
    cout << "Problem 1" << endl;
    int globalNum;
    int localNum;
    cout << "Enter a value for the global variable: ";
    cin >> globalNum;
    cout << "Enter a value for the local variable: ";
    cin >> localNum;
    int remainder = globalNum % localNum;
    cout << "The remainder of dividing globalNum by localNum is: " << remainder << endl;
    cout << "Problem 2" << endl;

    return 0;
}
