#include <iostream>
#include <string>
using namespace std;

int main() {
    cout << "Please enter the quantity of your numbers: ";
    int N;
    cin >> N;
    int sum = 0;
    int max = 0;
    int min;
    for (int i = 0; i<N; i++) {
        int n;
        cout << "enter your number: ";
        cin >> n;
        sum += n;
        if (max < n) {
            max = n;
        }
        if (min > n) {
            min = n;
        }
    }


    cout << "The mean of the entered numbers is " << (double) sum / N << "\n";
    cout << "The maximum value of the entered numbers is " << max << "\n";
    cout << "The minimum value of the entered numbers is " << min << "\n";
    cout << "The range value of the entered numbers is " << (max - min) << "\n";
}