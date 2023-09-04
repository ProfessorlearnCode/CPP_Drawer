#include <iostream>
using namespace std;

int factorial(int num) {
    if (num == 0) {
        return 1;
    } else {
        return num * factorial(num-1);
    }
}

int permutation(int n, int r) {
    return factorial(n) / factorial(n-r);
}

int combination(int n, int r) {
    return permutation(n, r) / factorial(r);
}

int main() {
    int choice, num, n, r;

    do {
        cout << "Enter a number to perform an operation:" << endl;
        cout << "1. Factorial of a number" << endl;
        cout << "2. Permutation of a number" << endl;
        cout << "3. Combination of a number" << endl;
        cout << "4. Exit" << endl;
        cin >> choice;

        switch (choice) {
            case 1:
                cout << "Enter a number: ";
                cin >> num;
                cout << "Factorial of " << num << " is " << factorial(num) << endl;
                break;
            case 2:
                cout << "Enter n and r: ";
                cin >> n >> r;
                cout << "Permutation of " << n << " and " << r << " is " << permutation(n, r) << endl;
                break;
            case 3:
                cout << "Enter n and r: ";
                cin >> n >> r;
                cout << "Combination of " << n << " and " << r << " is " << combination(n, r) << endl;
                break;
            case 4:
                cout << "Exiting program..." << endl;
                break;
            default:
                cout << "Invalid input. Please enter 1, 2, 3, or 4." << endl;
        }
    } while (choice != 4);

    return 0;
}

