#include <iostream>
#include <string>
using namespace std;
int fib(int n);

int main() {
    cout << "Enter a number: ";
    int n;
    cin >> n;
    int result = fib(n);
    cout << "Fibonacci of " << n << " is: " << result << endl;
}
int fib(int n) {
    if (n <= 1) {
        return n;
    } else {
        return fib(n - 1) + fib(n - 2);
    }
}