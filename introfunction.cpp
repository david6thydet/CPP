#include <iostream>
using namespace std;
// function to raise a number to a power
int raiseToPower(int base, int exponent) {
    int result = 1;
    for (int i = 1; i <= exponent; i++) {
       result *= base;
    }
    return result;
}

int main() {
    cout << "Enter a base number: ";
    int base;
    cin >> base;
    cout << "Enter an exponent: ";
    int exponent;
    cin >> exponent;
    int result = raiseToPower(base, exponent);
    cout << "Result: " << result << endl;
    return 0;
}
