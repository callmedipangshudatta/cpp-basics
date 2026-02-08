// Problem 3: Longest Substring Without Repeating Characters
// Goal: Find the length of the longest substring with all unique characters

#include <bits/stdc++.h>
using namespace std;

int lengthOfLongestSubstring(string s) {
    vector<int> freq(256, 0);
    int left = 0, ans = 0;

    for (int right = 0; right < s.size(); right++) {
        freq[s[right]]++;

        // Shrink if duplicate appears
        while (freq[s[right]] > 1) {
            freq[s[left]]--;
            left++;
        }

        // Update answer when window is valid
        ans = max(ans, right - left + 1);
    }

    return ans;
}

int main() {
    string s = "abcabcbb";
    cout << lengthOfLongestSubstring(s);
}
