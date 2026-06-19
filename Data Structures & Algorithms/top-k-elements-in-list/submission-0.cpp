class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        int n=nums.size();
        vector<int>ans;
        vector<pair<int,int>>arr;
        unordered_map<int,int>mp;
        for(auto i:nums){
            mp[i]++;
        }
        for(auto j:mp){
            arr.push_back({j.second,j.first});
        }
        sort(arr.begin(),arr.end());
        reverse(arr.begin(),arr.end());

        for(int i=0;i<k;i++){
            ans.push_back(arr[i].second);
        }
        return ans;
    }
};
