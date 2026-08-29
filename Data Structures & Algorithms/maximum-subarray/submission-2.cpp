class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int maximum=nums[0];
        int sum=0;
        for(int num:nums){
            if(sum<0){
                sum=0;
            }
            sum+=num;
            maximum=max(maximum,sum);
        }
        return maximum;
    }
};
