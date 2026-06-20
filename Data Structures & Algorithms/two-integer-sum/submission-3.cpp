class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
      int n=nums.size();
      unordered_map<int,int>hash;
      for(int i=0;i<n;i++){
        int second=target-nums[i];
        if(hash.find(second)!=hash.end()){
            return{hash[second],i};
        }
        hash[nums[i]]=i;
      }
      return {};
    }
};
