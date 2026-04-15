class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        unordered_set<int> set(nums.begin(), nums.end());
        int longest = 0;
        for (int num : set) {
            // if there isn't a number preceding this one in the set, start of sequence
            if (set.find(num - 1) == set.end()) {
                int length = 1;
                // look to see if there are consecutive numbers that come after
                while (set.find(num + length) != set.end()) {
                    length++; // update length if there is
                }
                longest = max(longest, length); //check to see if the sequence we went to is longer than the current longest
            }
        }
        return longest;
    }
};
