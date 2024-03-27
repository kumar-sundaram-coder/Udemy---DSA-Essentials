// Method - 1 | Clean and compact code
class Solution
{
public:
    int maxSubArray(vector<int> &nums)
    {
        int n = nums.size();

        int ans = nums[0];
        int localMax = nums[0];
        for (int i = 1; i < n; i++)
        {
            localMax = max((localMax + nums[i]), nums[i]);
            ans = max(ans, localMax);
        }
        return ans;
    }
};

// Method - 2 | Similar to method 1, but easy to understand and beginner friendly!

class Solution
{
public:
    int maxSubArray(vector<int> &nums)
    {
        int n = nums.size();
        int ans = INT_MIN;
        int currSum = 0;
        for (int i = 0; i < n; i++)
        {
            currSum += nums[i];
            if (currSum > ans)
            {
                ans = currSum;
            }
            if (currSum < 0)
            {
                currSum = 0;
            }
        }
        return ans;
    }
};