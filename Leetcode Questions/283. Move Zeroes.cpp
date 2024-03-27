// Method - 1 | In place

class Solution
{
public:
    void moveZeroes(vector<int> &nums)
    {
        int i = 0, j = 0, n = nums.size();

        for (; j < n; j++)
        {
            if (nums[j] != 0)
            {
                nums[i] = nums[j];
                i++;
            }
        }
        while (i < n)
        {
            nums[i++] = 0;
        }
    }
};

// Method -2 | Brute force | Using second array

class Solution
{
public:
    void moveZeroes(vector<int> &nums)
    {
        vector<int> ans;
        int zeroCount = 0;
        for (int ele : nums)
        {
            if (ele != 0)
            {
                ans.push_back(ele);
            }
            else
            {
                zeroCount++;
            }
        }
        while (zeroCount--)
        {
            ans.push_back(0);
        }
        nums = ans;
    }
};