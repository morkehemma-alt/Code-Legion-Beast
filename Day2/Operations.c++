#include <iostream>
using namespace std;

int main() {
    // Create int variables
    int a = 10, b = 5;

    // Create double variables
    double x = 12.5, y = 2.5;

    // Perform operations on int
    cout << "Integer Operations:" << endl;
    cout << "Addition: " << a + b << endl;
    cout << "Subtraction: " << a - b << endl;
    cout << "Multiplication: " << a * b << endl;
    cout << "Division: " << a / b << endl;

    cout << endl;

    // Perform operations on double
    cout << "Double Operations:" << endl;
    cout << "Addition: " << x + y << endl;
    cout << "Subtraction: " << x - y << endl;
    cout << "Multiplication: " << x * y << endl;
    cout << "Division: " << x / y << endl;

    cout << endl;

    // BONUS: Area of rectangle
    double length, width;

    cout << "Enter length: ";
    cin >> length;

    cout << "Enter width: ";
    cin >> width;

    double area = length * width;

    cout << "Area of rectangle: " << area << endl;

    return 0;
}