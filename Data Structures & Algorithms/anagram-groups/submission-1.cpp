class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map<string,vector<string>>anagrams;
        for(const auto&s: strs){
            string sorted=s;
            sort(sorted.begin(),sorted.end());
            anagrams[sorted].push_back(s);
        }
        vector<vector<string>>ans;
        for(auto& pair:anagrams){
            ans.push_back(pair.second);
        }
        return ans;
    }
};