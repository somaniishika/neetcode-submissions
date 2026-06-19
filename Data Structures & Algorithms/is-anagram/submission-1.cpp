class Solution {
public:
    bool isAnagram(string s, string t) {
        if (s.length() != t.length()) {
            return false;
        }

        unordered_map<char,int>cs;
        unordered_map<char,int>ct;
        for(auto i:s){
            cs[i]++;
            //ct[i]++;
        }
        for(auto j:t){
            ct[j]++;
        }
        return cs==ct;
    }
};
