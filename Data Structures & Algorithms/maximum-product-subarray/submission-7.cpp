class Solution {
public:
    int maxProduct(vector<int>& nums) {
        int maxP = nums[0];
        int curMax = 1, curMin = 1;

        for (int num : nums) {
            int t1 = curMax * num;
            int t2 = curMin * num;
            curMax = max({t1, t2, num});
            curMin = min({t1, t2, num});
            maxP = max(maxP, curMax);
        }
        return maxP;
    }
};
