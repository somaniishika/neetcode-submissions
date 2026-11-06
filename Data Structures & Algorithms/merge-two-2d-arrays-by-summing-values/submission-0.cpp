class Solution {
public:
    vector<vector<int>> mergeArrays(vector<vector<int>>& nums1, vector<vector<int>>& nums2) {
        vector<int> totals(1001, 0);
        vector<bool> visited(1001, false); // Tracks if the ID exists in either array
        
        for (auto& row : nums1) {
            totals[row[0]] += row[1];
            visited[row[0]] = true;
        }
        for (auto& row : nums2) {
            totals[row[0]] += row[1];
            visited[row[0]] = true;
        }
        
        vector<vector<int>> answer;
        for (int id = 1; id <= 1000; id++) {
            if (visited[id]) {
                answer.push_back({id, totals[id]});
            }
        }
        return answer;
    }
};
