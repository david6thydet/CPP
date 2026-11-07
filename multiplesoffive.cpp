#include <iostream>
using namespace std;

int main() {
    cout << "enter a number: ";
    int N;
    cin >> N;
    while (1) {
        int answer = ( N % 5 == 0 && N >= 0)? N/5 : -1;
        cout << answer << "\n";
    }
}