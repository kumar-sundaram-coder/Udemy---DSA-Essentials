class Solution
{
public:
    int removeElement(vector<int> &nums, int val)
    {
        int i = 0, j = 0, n = nums.size();

        for (; j < n; j++)
        {
            if (nums[j] != val)
            {
                nums[i] = nums[j];
                i++;
            }
        }
        return i;
    }
};