#include <iostream>
using namespace std;

int swap( int &a, int &b);

int main() {
    int x, y;
    cout << "Enter two numbers: ";
    cin >> x >> y;
    cout << "Before swapping: x = " << x << ", y = " << y << endl;
    swap(x, y);
    cout << "After swapping: x = " << x << ", y = " << y << endl;
    return 0;
}

int swap(int &a, int &b) {
    int temtp = a;
    a = b;
    b = temtp;
    return 0;
}
