class Solution {
public:
    int longestMonotonicSubarray(vector<int>& nums) {
        int n = nums.size();
        if (n <= 1) return n;

        int max_len = 1;
        int inc = 1; // Tracks current strictly increasing length
        int dec = 1; // Tracks current strictly decreasing length

        for (int i = 1; i < n; i++) {
            if (nums[i] > nums[i - 1]) {
                inc += 1;
                dec = 1; // Reset decreasing sequence
            } 
            else if (nums[i] < nums[i - 1]) {
                dec += 1;
                inc = 1; // Reset increasing sequence
            } 
            else {
                // Elements are equal; reset both sequences
                inc = 1;
                dec = 1;
            }
            max_len = max({max_len, inc, dec});
        }

        return max_len;
    }
};