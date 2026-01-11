#include <iostream>
#include <vector>
using namespace std;

/*
We will NOT focus on C++.
We will focus on HOW MUCH WORK the computer does.
*/

/*
----------------------------
O(1) — CONSTANT TIME
----------------------------
No matter how big the data is,
this takes SAME time.
*/
int constantTimeExample(vector<int> v) {
    return v[0];   // Just take first element
}

/*
----------------------------
O(n) — LINEAR TIME
----------------------------
Work increases as data increases.
*/
int linearTimeExample(vector<int> v) {
    int sum = 0;
    for (int i = 0; i < v.size(); i++) {
        sum = sum + v[i];   // visit every element once
    }
    return sum;
}

/*
----------------------------
O(n²) — QUADRATIC TIME
----------------------------
For every element, we again check every element.
Very slow for big data.
*/
int quadraticTimeExample(vector<int> v) {
    int count = 0;
    for (int i = 0; i < v.size(); i++) {
        for (int j = 0; j < v.size(); j++) {
            count++;   // doing extra work again and again
        }
    }
    return count;
}

int main() {

    vector<int> numbers = {1, 2, 3, 4, 5};

    cout << "O(1) Example (just pick first element): "
         << constantTimeExample(numbers) << endl;

    cout << "O(n) Example (sum of all elements): "
         << linearTimeExample(numbers) << endl;

    cout << "O(n^2) Example (nested work count): "
         << quadraticTimeExample(numbers) << endl;

    return 0;
}
