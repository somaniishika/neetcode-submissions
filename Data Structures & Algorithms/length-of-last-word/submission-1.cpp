class Solution {
public:
    int lengthOfLastWord(string s) {
        int count = 0;
        int n = s.length();
        int i = n - 1;
        
        // Step 1: Skip all trailing spaces at the end of the string
        while (i >= 0 && s[i] == ' ') {
            i--;
        }
        
        // Step 2: Count the characters of the actual last word
        while (i >= 0 && s[i] != ' ') {
            count++;
            i--;
        }   
        
        return count;
    }
};
