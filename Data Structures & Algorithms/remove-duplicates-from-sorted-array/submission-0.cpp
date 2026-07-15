class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int n=nums.size();
        vector<int>ans;
        map<int,int>freq;
        for(auto i:nums){
            freq[i]++;
        }

        for(auto i:freq){
            ans.push_back(i.first);
        }

        for(int i = 0; i < ans.size(); i++){
            nums[i] = ans[i];
        }
        return ans.size();
    }
};