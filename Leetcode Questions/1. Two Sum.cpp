// Method - 1 | Using two loops| O(N^2)
class Solution
{
public:
    vector<int> twoSum(vector<int> &nums, int target)
    {

        int n = nums.size();
        if (n < 2)
        {
            return {};
        }
        if (n == 2)
        {
            if (nums[0] + nums[1] == target)
                return {0, 1};
            else
                return {};
        }

        for (int i = 0; i < n - 1; i++)
        {
            for (int j = i + 1; j < n; j++)
            {
                if (nums[i] + nums[j] == target)
                {
                    return {i, j};
                }
            }
        }
        return {};
    }
};

// Method - 2 | Using extra space - Map | O(N)
class Solution
{
public:
    vector<int> twoSum(vector<int> &nums, int target)
    {

        int n = nums.size();
        if (n < 2)
        {
            return {};
        }
        if (n == 2)
        {
            if (nums[0] + nums[1] == target)
                return {0, 1};
            else
                return {};
        }
        unordered_map<int, int> mp;
        for (int i = 0; i < n; i++)
        {
            if (mp.find(target - nums[i]) != mp.end())
            {
                return {i, mp[target - nums[i]]};
            }
            else
            {
                mp[nums[i]] = i;
            }
        }

        return {};
    }
};