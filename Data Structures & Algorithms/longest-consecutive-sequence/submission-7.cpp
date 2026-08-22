class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        int n=nums.size();
        if(n==0){
            return 0;
        }
        sort(nums.begin(),nums.end());
        int ans=0;
        int current=nums[0];
        int streak=0;
        int i=0;
        while(i<n){
            if(current!=nums[i]){
                current=nums[i];
                streak=0;
            }
            while(i<n && nums[i]==current){
                i++;
            }
            streak++;
            current++;
            ans=max(ans,streak);
        }
        return ans;
    }
};
