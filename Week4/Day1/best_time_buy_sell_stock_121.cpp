#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int left = 0;   // buy day
        int right = 1;  // sell day
        int maxProfit = 0;

        while (right < prices.size()) {
            if (prices[right] > prices[left]) {
                maxProfit = max(maxProfit, prices[right] - prices[left]);
            } else {
                left = right;
            }
            right++;
        }
        return maxProfit;
    }
};
