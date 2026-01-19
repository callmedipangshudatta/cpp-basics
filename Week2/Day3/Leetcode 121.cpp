// 121. Best Time to Buy and Sell Stock

// class Solution {
// public:
//     int maxProfit(vector<int>& prices) {
//         if(prices.empty()) return 0;
//         int minBuy = prices[0];
//         int maxProfit = 0;
//         for(int i = 1;i<prices.size();i++){
//             minBuy = min(minBuy,prices[i]);
//             maxProfit = max(maxProfit,prices[i]-minBuy);
//         }
//         return maxProfit;
//     }
// };

