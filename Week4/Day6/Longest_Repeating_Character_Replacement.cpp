// 424. Longest Repeating Character Replacement
// Pattern: Variable Sliding Window
// Goal: Find longest substring where at most k characters can be replaced to make all same

#include <bits/stdc++.h>
using namespace std;

int characterReplacement(string s, int k) {

    vector<int> freq(26, 0);

    int left = 0;
    int maxFreq = 0;   // Highest frequency in current window
    int ans = 0;

    for (int right = 0; right < s.size(); right++) {

        // Expand
        freq[s[right] - 'A']++;
        maxFreq = max(maxFreq, freq[s[right] - 'A']);

        // If window invalid → shrink
        while ((right - left + 1) - maxFreq > k) {
            freq[s[left] - 'A']--;
            left++;
        }

        // Update answer when valid
        ans = max(ans, right - left + 1);
    }

    return ans;
}

int main() {
    string s = "AABABBA";
    int k = 1;

    cout << characterReplacement(s, k);
}
