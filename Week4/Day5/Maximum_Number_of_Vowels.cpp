// 1456. Maximum Number of Vowels in a Substring of Given Length
// Goal: Find max vowels in any substring of size k

#include <bits/stdc++.h>
using namespace std;

bool isVowel(char c) {
    return string("aeiou").find(c) != string::npos;
}

int maxVowels(string s, int k) {
    int count = 0, ans = 0;

    // First window
    for (int i = 0; i < k; i++) {
        if (isVowel(s[i])) count++;
    }
    ans = count;

    // Slide window
    for (int right = k; right < s.size(); right++) {
        if (isVowel(s[right])) count++;
        if (isVowel(s[right - k])) count--;

        ans = max(ans, count);
    }

    return ans;
}

int main() {
    string s = "abciiidef";
    int k = 3;
    cout << maxVowels(s, k);
}
