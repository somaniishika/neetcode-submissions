class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        int n=nums.size();
        int i=0;
        int j=n-1;
        vector<int>ans(n);
        int k=n-1;
        while(i<=j){
            int isq=nums[i]*nums[i];
            int jsq=nums[j]*nums[j];
            if(isq>jsq){
                ans[k]=isq;
                i++;
            }else{
                ans[k]=jsq;
                j--;
            }
            k--;
        }
        return ans;
    }
};