class Solution {
public:
    int maxProduct(vector<int>& nums) {
        int res = nums[0];
        int curMin = 1, curMax = 1;

        for (int num : nums) {
            int temp1 = curMax * num;
            int temp2 = curMin * num;
            curMax = max({temp1, temp2, num});
            curMin = min({temp1, temp2, num});
            res = max(res, curMax);
        }
        return res;
    }
};
