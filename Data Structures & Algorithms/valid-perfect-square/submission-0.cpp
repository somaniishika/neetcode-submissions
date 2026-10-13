class Solution {
public:
    bool isPerfectSquare(int num) {
        for (long long i = 1; i <= num; i++) {
            long long sq = i * i;
            if (sq > num) {
                return false;
            }
            if (sq == num) {
                return true;
            }
        }
        return false;
    }
};