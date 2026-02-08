// 424. Longest Repeating Character Replacement
// Goal: Longest substring where you can replace at most k characters to make all same

#include <bits/stdc++.h>
using namespace std;

int characterReplacement(string s, int k) {
    vector<int> freq(26, 0);
    int left = 0, maxFreq = 0, ans = 0;

    for (int right = 0; right < s.size(); right++) {
        freq[s[right] - 'A']++;
        maxFreq = max(maxFreq, freq[s[right] - 'A']);

        // If replacements needed > k, shrink
        while ((right - left + 1) - maxFreq > k) {
            freq[s[left] - 'A']--;
            left++;
        }

        ans = max(ans, right - left + 1);
    }

    return ans;
}

int main() {
    string s = "AABABBA";
    int k = 1;
    cout << characterReplacement(s, k);
}
