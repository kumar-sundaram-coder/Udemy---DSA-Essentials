
// Method - 1 | counting the number of ones seperately with the help of custom fxn
class Solution
{
public:
    int countNumberOfOnes(int n)
    {
        int ans = 0;
        while (n != 0)
        {
            if (n & 1)
            {
                ans++;
            }
            n = n >> 1;
        }
        return ans;
    }
    vector<int> countBits(int n)
    {
        vector<int> ans;
        for (int i = 0; i < n + 1; i++)
        {
            ans.push_back(countNumberOfOnes(i));
        }
        return ans;
    }
};

// Method - 2 | Using STL Library function __builtin_popcount

class Solution
{
public:
    vector<int> countBits(int n)
    {
        vector<int> ans;
        for (int i = 0; i < n + 1; i++)
        {
            ans.push_back(__builtin_popcount(i));
        }
        return ans;
    }
};