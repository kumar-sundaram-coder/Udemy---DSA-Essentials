class Solution
{
public:
    void sortColors(vector<int> &nums)
    {

        vector<int> count(3, 0);

        for (auto ele : nums)
        {
            count[ele]++;
        }

        int i = 0;
        int n = nums.size();
        while (count[0] > 0 && i < n)
        {
            nums[i] = 0;
            i++;
            count[0] -= 1;
        }
        while (count[1] > 0 && i < n)
        {
            nums[i] = 1;
            i++;
            count[1] -= 1;
        }
        while (count[2] > 0 && i < n)
        {
            nums[i] = 2;
            i++;
            count[2] -= 1;
        }
    }
};