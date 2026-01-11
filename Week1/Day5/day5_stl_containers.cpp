#include <iostream>
#include <vector>
#include <utility>          // for pair
#include <map>
#include <unordered_map>
#include <set>
#include <unordered_set>

using namespace std;

int main() {

    cout << "=== VECTOR DEMO ===" << endl;

    vector<int> v;

    v.push_back(10);
    v.push_back(20);
    v.push_back(30);

    cout << "Vector elements: ";
    for (int x : v) {
        cout << x << " ";
    }
    cout << endl;

    cout << "Size: " << v.size() << endl;
    cout << "Capacity: " << v.capacity() << endl;

    v.pop_back();

    cout << "After pop_back: ";
    for (int x : v) {
        cout << x << " ";
    }
    cout << endl;

    cout << "\n=== PAIR DEMO ===" << endl;

    pair<int, int> p = {1, 100};
    cout << "First: " << p.first << ", Second: " << p.second << endl;

    pair<int, pair<int, int>> nested = {1, {2, 3}};
    cout << "Nested pair: " << nested.first << " "
         << nested.second.first << " "
         << nested.second.second << endl;

    cout << "\n=== MAP DEMO ===" << endl;

    map<int, int> mp;
    mp[1] = 10;
    mp[2] = 20;
    mp[1] = 30; // overwrites value

    for (auto it : mp) {
        cout << it.first << " -> " << it.second << endl;
    }

    cout << "\n=== UNORDERED_MAP (FREQUENCY COUNT) ===" << endl;

    vector<int> nums = {1, 1, 2, 3, 3, 3};
    unordered_map<int, int> freq;

    for (int x : nums) {
        freq[x]++;
    }

    for (auto it : freq) {
        cout << it.first << " occurs " << it.second << " times" << endl;
    }

    cout << "\n=== SET DEMO ===" << endl;

    set<int> s;
    s.insert(10);
    s.insert(20);
    s.insert(10); // duplicate ignored

    for (int x : s) {
        cout << x << " ";
    }
    cout << endl;

    cout << "\n=== UNORDERED_SET DEMO ===" << endl;

    unordered_set<int> us;
    us.insert(5);
    us.insert(5);
    us.insert(10);

    for (int x : us) {
        cout << x << " ";
    }
    cout << endl;

    return 0;
}
