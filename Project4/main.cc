#include <iostream>
#include "complex.h"

using std::cout;
using std::endl;

int main() {
    Complex c1(2, 3);
    Complex c2(1, 2);

    double num = 5;

    cout << c1 << " + " << c2 << " = " << c1 + c2 << endl;
    cout << c1 << " - " << c2 << " = " << c1 - c2 << endl;
    cout << c1 << " * " << c2 << " = " << c1 * c2 << endl;
    cout << c1 << " / " << c2 << " = " << c1 / c2 << endl;

    cout << c1 << " + " << num << " = " << c1 + num << endl;
    cout << c1 << " - " << num << " = " << c1 - num << endl;
    cout << c1 << " * " << num << " = " << c1 * num << endl;
    cout << c1 << " / " << num << " = " << c1 / num << endl;

    cout << num << " + " << c1 << " = " << num + c1 << endl;
    cout << num << " - " << c1 << " = " << num - c1 << endl;
    cout << num << " * " << c1 << " = " << num * c1 << endl;
    cout << num << " / " << c1 << " = " << num / c1 << endl;

    return 0;
}
