class Solution
{
public:
    int findMaxConsecutiveOnes(vector<int> &nums)
    {
        int ans = 0;
        int n = nums.size();
        for (int i = 0; i < n; i++)
        {
            int currCount = 0;
            while (i < n)
            {
                if (nums[i] == 1)
                {
                    currCount++;
                    i++;
                }
                else
                {
                    break;
                }
            }
            ans = max(ans, currCount);
        }
        return ans;
    }
};

// similar solution
class Solution
{
public:
    int findMaxConsecutiveOnes(vector<int> &nums)
    {
        int ans = 0;
        int n = nums.size(), i = 0;
        int currCount = 0;
        while (i < n)
        {
            if (nums[i] == 1)
            {
                ans = max(ans, currCount + 1);
                currCount++;
            }
            else
            {
                currCount = 0;
            }
            i++;
        }
        return ans;
    }
};

// similar solution
class Solution
{
public:
    int findMaxConsecutiveOnes(vector<int> &nums)
    {
        int ans = 0;
        int n = nums.size(), i = 0;
        int currCount = 0;
        while (i < n)
        {
            if (nums[i] == 1)
            {
                currCount++;
            }
            else
            {
                ans = max(ans, currCount);
                currCount = 0;
            }
            i++;
        }
        ans = max(ans, currCount);
        return ans;
    }
};