// Method - 1 | Sorting and then checking all adjacent eleents | kind of like two pointers
// Time: O(N*Log(N))
// Space: O(1)

class Solution
{
public:
    bool containsDuplicate(vector<int> &nums)
    {
        int n = nums.size();
        if (n < 2)
            return false;
        sort(nums.begin(), nums.end());
        for (int i = 0; i < n - 1; i++)
        {
            if (nums[i] == nums[i + 1])
            {
                return true;
            }
        }
        return false;
    }
};

// Method - 2 | Using unordered set to store all the elements and to check and return true if we find any duplicate element
// Time: O(N)
// Space: O(N)

class Solution
{
public:
    bool containsDuplicate(vector<int> &nums)
    {

        unordered_set<int> set;
        for (int ele : nums)
        {
            if (set.find(ele) != set.end())
            {
                return true;
            }
            else
            {
                set.insert(ele);
            }
        }
        return false;
    }
};