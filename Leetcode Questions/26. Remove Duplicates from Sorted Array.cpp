class Solution
{
public:
    int removeDuplicates(vector<int> &nums)
    {
        int n = nums.size();
        if (n < 2)
            return n;
        int i = 0, j = 1;
        for (; j < n; j++)
        {
            if (nums[i] != nums[j])
            {
                nums[i + 1] = nums[j];
                i++;
            }
        }
        return i + 1;
    }
};