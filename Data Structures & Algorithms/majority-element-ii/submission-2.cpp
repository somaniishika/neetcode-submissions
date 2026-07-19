class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        int n = nums.size();
        unordered_map<int, int> counts;
        vector<int> result;
        
        // Count frequencies of each number
        for (int num : nums) {
            counts[num]++;
        }
        
        // Collect numbers that cross the n/3 threshold
        for (auto& pair : counts) {
            if (pair.second > n / 3) {
                result.push_back(pair.first);
            }
        }
        return result;
    }
};