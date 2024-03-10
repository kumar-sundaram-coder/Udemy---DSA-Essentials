
// Method - 1 | counting the number of ones seperately with the help of custom fxn
class Solution
{
public:
    int countNumberOfOnes(int n)
    {
        int count = 0;
        while (n != 0)
        {
            if (n & 1)
            {
                count++;
            }
            n = n >> 1;
        }
        return count;
    }
    int hammingDistance(int x, int y)
    {
        int ans = x ^ y;
        return countNumberOfOnes(ans);
    }
};

// Method - 2 | Using builtin function "__builtin_popcount"

class Solution
{
public:
    int hammingDistance(int x, int y)
    {
        int ans = x ^ y;
        return __builtin_popcount(ans);
    }
};