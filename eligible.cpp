#include <iostream>
using namespace std;

int main() {
    int age;

    cout << "Enter your age: ";
    cin >> age;

    if (age >= 18) {
        cout << "You are eligible to get a driving licence.";
    } 
    else {
        cout << "You are not eligible to get a driving licence.";
    }

    return 0;
}