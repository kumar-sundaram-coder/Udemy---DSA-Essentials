class Solution {
public:
    bool hasAlternatingBits(int n) {

        int prev = -1;

        while (n != 0) {
            if ((prev == 0 || prev == -1) && (n & 1)) {
                prev = 1;
                n = n >> 1;
            } else if ((prev == 1 || prev == -1) && (n & 1) == 0) {
                prev = 0;
                n = n >> 1;
            } else {
                return false;
            }
        }
        return true;
    }
};