class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
      int n=nums.size();
      unordered_map<int,int>freq;
      for(int num:nums){
        freq[num]++;
      }
      for(auto count:freq){
        if(count.second>1){
          return true;
        }
      }
      return false;
    }
};