#include <iostream>
using namespace std;

/*
GLOBAL VARIABLE
- Stored in static memory
- Lifetime: entire program
*/
int globalCounter = 100;

// FUNCTION DECLARATION
int add(int a, int b);

// PASS BY VALUE
void incrementByValue(int x) {
    x = x + 1;
    cout << "Inside incrementByValue: x = " << x << endl;
}

// PASS BY REFERENCE
void incrementByReference(int &x) {
    x = x + 1;
    cout << "Inside incrementByReference: x = " << x << endl;
}

// INLINE FUNCTION (REQUEST, not command)
inline int square(int x) {
    return x * x;
}

int main() {

    cout << "=== FUNCTION CALL & STACK DEMO ===" << endl;

    int a = 5;
    int b = 7;

    int result = add(a, b);
    cout << "Result of add: " << result << endl;

    cout << "\n=== PASS BY VALUE ===" << endl;
    int num1 = 10;
    incrementByValue(num1);
    cout << "After function call: num1 = " << num1 << endl;

    cout << "\n=== PASS BY REFERENCE ===" << endl;
    int num2 = 10;
    incrementByReference(num2);
    cout << "After function call: num2 = " << num2 << endl;

    cout << "\n=== INLINE FUNCTION ===" << endl;
    cout << "Square of 6: " << square(6) << endl;

    cout << "\n=== GLOBAL VARIABLE ===" << endl;
    cout << "Global Counter: " << globalCounter << endl;

    return 0;
}

// FUNCTION DEFINITION
int add(int a, int b) {
    int sum = a + b; // local variable (stack)
    return sum;
}
