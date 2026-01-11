#include <iostream>
using namespace std;

// Function using POINTER
void changeUsingPointer(int *p) {
    if (p != NULL) {
        *p = *p + 10;
    }
}

// Function using REFERENCE
void changeUsingReference(int &r) {
    r = r + 20;
}

int main() {

    cout << "=== POINTER BASICS ===" << endl;

    int x = 10;
    int *p = &x;   // pointer stores address of x

    cout << "x value: " << x << endl;
    cout << "Address of x (&x): " << &x << endl;
    cout << "Pointer p: " << p << endl;
    cout << "Value at p (*p): " << *p << endl;

    cout << "\n=== MODIFY USING POINTER ===" << endl;
    changeUsingPointer(p);
    cout << "x after pointer function: " << x << endl;

    cout << "\n=== REFERENCE BASICS ===" << endl;

    int y = 30;
    int &ref = y;  // reference to y

    cout << "y value: " << y << endl;
    cout << "ref value: " << ref << endl;

    ref = 50;
    cout << "y after modifying ref: " << y << endl;

    cout << "\n=== MODIFY USING REFERENCE ===" << endl;
    changeUsingReference(y);
    cout << "y after reference function: " << y << endl;

    cout << "\n=== NULL POINTER SAFETY ===" << endl;
    int *nullPtr = NULL;

    if (nullPtr == NULL) {
        cout << "Pointer is NULL, safe to skip dereference" << endl;
    }

    return 0;
}
