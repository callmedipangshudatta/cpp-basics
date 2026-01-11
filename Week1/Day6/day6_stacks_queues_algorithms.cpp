#include <iostream>
#include <stack>
#include <queue>
#include <vector>
#include <algorithm>

using namespace std;

int main() {

    cout << "=== STACK DEMO ===" << endl;

    stack<int> st;
    st.push(10);
    st.push(20);
    st.push(30);

    cout << "Top element: " << st.top() << endl;
    st.pop();
    cout << "Top after pop: " << st.top() << endl;

    cout << "\n=== QUEUE DEMO ===" << endl;

    queue<int> q;
    q.push(1);
    q.push(2);
    q.push(3);

    cout << "Front element: " << q.front() << endl;
    q.pop();
    cout << "Front after pop: " << q.front() << endl;

    cout << "\n=== PRIORITY QUEUE (MAX HEAP) ===" << endl;

    priority_queue<int> maxHeap;
    maxHeap.push(5);
    maxHeap.push(1);
    maxHeap.push(10);

    cout << "Top (max): " << maxHeap.top() << endl;

    cout << "\n=== PRIORITY QUEUE (MIN HEAP) ===" << endl;

    priority_queue<int, vector<int>, greater<int>> minHeap;
    minHeap.push(5);
    minHeap.push(1);
    minHeap.push(10);

    cout << "Top (min): " << minHeap.top() << endl;

    cout << "\n=== STL ALGORITHMS ===" << endl;

    vector<int> v = {5, 1, 4, 2, 3};

    sort(v.begin(), v.end());
    cout << "After sort: ";
    for (int x : v) cout << x << " ";
    cout << endl;

    reverse(v.begin(), v.end());
    cout << "After reverse: ";
    for (int x : v) cout << x << " ";
    cout << endl;

    cout << "Min element: " << *min_element(v.begin(), v.end()) << endl;
    cout << "Max element: " << *max_element(v.begin(), v.end()) << endl;

    cout << "Count of 3: " << count(v.begin(), v.end(), 3) << endl;

    auto it = find(v.begin(), v.end(), 4);
    if (it != v.end()) {
        cout << "Found 4" << endl;
    } else {
        cout << "4 not found" << endl;
    }

    cout << "\n=== BINARY SEARCH HELPERS ===" << endl;

    vector<int> sorted = {1, 2, 2, 2, 3, 4, 5};

    auto lb = lower_bound(sorted.begin(), sorted.end(), 2);
    auto ub = upper_bound(sorted.begin(), sorted.end(), 2);

    cout << "Lower bound of 2 index: " << lb - sorted.begin() << endl;
    cout << "Upper bound of 2 index: " << ub - sorted.begin() << endl;
    cout << "Frequency of 2: " << ub - lb << endl;

    return 0;
}
