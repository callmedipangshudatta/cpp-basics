#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    bool isPalindrome(string &s, int left, int right) {
        while (left < right) {
            if (s[left] != s[right]) return false;
            left++;
            right--;
        }
        return true;
    }

    bool check(string &a, string &b) {
        int left = 0, right = a.size() - 1;

        while (left < right) {
            if (a[left] != b[right]) {
                return isPalindrome(a, left, right) ||
                       isPalindrome(b, left, right);
            }
            left++;
            right--;
        }
        return true;
    }

    bool checkPalindromeFormation(string a, string b) {
        return check(a, b) || check(b, a);
    }
};
