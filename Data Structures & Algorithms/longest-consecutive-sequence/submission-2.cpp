class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        int n=nums.size();
        sort(nums.begin(),nums.end());
        int curl=1;
        int maxl=0;

        if(n==0){
            return 0;
        }

        for(int i=1;i<n;i++){
            if(nums[i]==nums[i-1]+1){
                curl++;
            }
            else if(nums[i]!=nums[i-1]){
                maxl=max(maxl,curl);
                curl=1;
            }
        }
        maxl=max(maxl,curl);
        return maxl;
    }
};
