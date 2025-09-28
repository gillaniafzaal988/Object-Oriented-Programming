#include <iostream>
#include "Calculator.h"
#include "Distance.h"
using namespace std;

int main() {
    // Task 1: Calculator
    Calculator c1(6, 7);
    cout << "Addition (int): " << c1.add() << endl;
    cout << "Division (int): " << c1.divide() << endl;
    cout << "Multiplication (int): " << c1.multiply() << endl;
    cout << "Subtraction (int): " << c1.subtract() << endl;

    Calculator c2(6.6, 7);
    cout << "Addition (double): " << c2.addDouble() << endl;
    cout << "Division (double): " << c2.divideDouble() << endl;
    cout << "Multiplication (double): " << c2.multiplyDouble() << endl;
    cout << "Subtraction (double): " << c2.subtractDouble() << endl;

    cout << endl;

    // Task 2: Operator Overloading
    cout << "-------Operator Overloading-------" << endl;
    Distance d1(7, 8);
    Distance d2(7, 8);

    if (d1 == d2) {
        cout << "Equal" << endl;
    } else {
        cout << "Not Equal" << endl;
    }

    return 0;
}

