class Solution
{
public:
    int thirdMax(vector<int> &nums)
    {
        int n = nums.size();
        if (n <= 2)
            return *max_element(nums.begin(), nums.end());

        sort(nums.begin(), nums.end());

        long max1 = LONG_MIN, max2 = LONG_MIN, max3 = LONG_MIN;
        for (int ele : nums)
        {
            if (ele > max1)
            {
                max3 = max2;
                max2 = max1;
                max1 = ele;
            }
        }
        return max3 == LONG_MIN ? max1 : max3;
    }
};