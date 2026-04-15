class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        // Kadane's Algorithm
        int curSum = nums[0];
        int res = nums[0];

        for (int i = 1; i < nums.size(); i++){
            curSum = max(nums[i], curSum + nums[i]);
            res = max(res, curSum);
        }
        return res;
    }
};
