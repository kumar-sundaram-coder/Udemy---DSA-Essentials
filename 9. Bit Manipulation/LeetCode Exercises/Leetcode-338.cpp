
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

// Method - 3 | counting the number of ones seperately with the help of custom fxn | hack approach | using n & (n-1) -> this will decrease the value of significant bit present in n -> from least significant side
class Solution
{
public:
    int countNumberOfOnes(int n)
    {
        int ans = 0;
        while (n != 0)
        {
            n = n & (n - 1); // this will keep on decreasing the count of 1 from the
                             // least significant bit side(right to left side)
            ans++;           // incerase the value of ans
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