class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int maximum=nums[0];
        int n=nums.size();
        int sum=0;
        for(int i=0;i<n;i++){
            if(sum<0){
                sum=0;
            }
            sum+=nums[i];
            maximum=max(maximum,sum);
        }
        return maximum;
    }
};
