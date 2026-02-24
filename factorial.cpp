#include <iostream>
using namespace std;

int main() {
    int n;
    long long factorial = 1;

    cout << "Enter a number: ";
    cin >> n;

    if (n < 0) {
        cout << "Factorial of negative number does not exist.";
    } 
    else {
        for (int i = 1; i <= n; i++) {
            factorial *= i;
        }
        cout << "Factorial of " << n << " = " << factorial;
    }

    return 0;
}