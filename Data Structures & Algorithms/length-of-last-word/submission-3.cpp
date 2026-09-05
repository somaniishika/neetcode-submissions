class Solution {
public:
    int lengthOfLastWord(string s) {
        int length=0;
        bool flag=false;
        int n=s.size();
        for(int i=n-1;i>=0;i--){
            if(s[i]!=' '){
                length++;
                flag=true;
            }
            else if(flag){
                break; 
            }
        }
        return length;
    }
};