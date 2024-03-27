// Method - 1 | Using extra space for left and right product array & the time complexity is O(N)

class Solution
{
public:
    vector<int> productExceptSelf(vector<int> &nums)
    {
        int n = nums.size();
        vector<int> leftProduct(n), rightProduct(n);

        leftProduct[0] = 1;
        for (int i = 1; i < n; i++)
        {
            leftProduct[i] = leftProduct[i - 1] * nums[i - 1];
        }

        rightProduct[n - 1] = 1;
        for (int j = n - 2; j >= 0; j--)
        {
            rightProduct[j] = rightProduct[j + 1] * nums[j + 1];
        }
        vector<int> ans(n);
        for (int i = 0; i < n; i++)
        {
            ans[i] = leftProduct[i] * rightProduct[i];
        }

        return ans;
    }
};

// Method - 2 | Using no extra space for left and right product array, using the output array only for this purpose, and the time complexity is O(N)

class Solution
{
public:
    vector<int> productExceptSelf(vector<int> &nums)
    {
        int n = nums.size();
        vector<int> ans(n);

        ans[0] = 1;
        for (int i = 1; i < n; i++)
        {
            ans[i] = ans[i - 1] * nums[i - 1];
        }

        int right = 1;
        for (int i = n - 1; i >= 0; i--)
        {
            ans[i] = ans[i] * right;
            right = right * nums[i];
        }

        return ans;
    }
};