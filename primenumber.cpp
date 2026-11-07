#include <iostream>
using namespace std;

int main() {
    cout << "Please enter nth first prime numbers: ";
    int N;
    cin >> N;
    for (int i = 2; N > 0; i++) {
        bool isPrime = true;
        for (int j = 2; i > j; j++) {
            if ( i % j == 0) { 
                isPrime = false;
                break;
            }

        }
        if (isPrime) {
            --N;
            cout << i << "\n";
        }
        
    }
    return 0;    
}
