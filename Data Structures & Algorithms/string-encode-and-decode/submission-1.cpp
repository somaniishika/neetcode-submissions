class Solution {
public:
    // Encodes a list of strings to a single string
    string encode(vector<string>& strs) {
        string res;
        for (string s : strs) {
            res += to_string(s.size()) + "#" + s;
        }
        return res;
    }

    // Decodes a single string to a list of strings
    vector<string> decode(string s) {
        vector<string> res;
        int i = 0;
        while (i < s.size()) {
            int j = i;
            while (s[j] != '#') {
                j++;
            }
            // Extract the length of the next string
            int n = stoi(s.substr(i, j - i));
            i = j + 1; // Move past the '#'
            // Extract the string of length n
            res.push_back(s.substr(i, n));
            i += n; // Move i past the current string
        }
        return res;
    }
};
