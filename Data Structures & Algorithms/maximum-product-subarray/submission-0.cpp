class Solution {
public:
    int maxProduct(vector<int>& nums) {
        // Kadane's Algorithm
        int n = nums.size();
        int currMin = nums[0];
        int currMax = nums[0];
        int maxProd = nums[0];

        for (int i = 1; i < n; i++){
            int temp = max({nums[i], currMin * nums[i], currMax * nums[i]});
            currMin = min({nums[i], currMin * nums[i], currMax * nums[i]});
            currMax = temp;
            maxProd = max(maxProd, currMax);
        }
        return maxProd;
    }
};
