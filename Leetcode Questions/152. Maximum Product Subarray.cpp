class Solution
{
public:
    int maxProduct(vector<int> &nums)
    {
        int n = nums.size();
        if (n < 1)
            return 0;
        if (n == 1)
            return nums[0];

        int ans = INT_MIN;
        int maxProd = 1, minProd = 1;
        for (int i = 0; i < n; i++)
        {
            if (nums[i] < 0)
            {
                swap(maxProd, minProd);
            }

            maxProd = max(nums[i], maxProd * nums[i]);
            minProd = min(nums[i], minProd * nums[i]);

            ans = max(ans, maxProd);
        }

        return ans;
    }
};