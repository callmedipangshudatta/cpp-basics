// 53. Maximum Subarray

// class Solution {
// public:
//     int maxSubArray(vector<int>& nums) {
//         int windowsum = nums[0];
//         int maxsum = nums[0];
//         for(int i = 1 ;i<nums.size();i++){
//             windowsum = max(nums[i],nums[i]+ windowsum);
//             maxsum = max(windowsum,maxsum);
//         }
//         return maxsum;
//     }
// };