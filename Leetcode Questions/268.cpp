// Method -1 | using sorting
class Solution
{
public:
    int missingNumber(vector<int> &nums)
    {
        sort(nums.begin(), nums.end());
        int n = nums.size();
        for (int i = 0; i < n; i++)
        {
            if (nums[i] != i)
                return i;
        }
        return n;
    }
};

// Method - 2 | Using bit manipulation (XOR)

class Solution
{
public:
    int missingNumber(vector<int> &nums)
    {
        int n = nums.size();
        int ans = 0;
        for (int i = 0; i < n; i++)
        {
            ans ^= i;
            ans ^= nums[i];
        }
        ans ^= n;
        return ans;
    }
};

// Method - 3  | Using maths formula i.e., sum of first N natural number = (n*(n+1))/2  and by doing the actual sum of the vector, we can substract these two and will get the difference and that will be our missing element!

class Solution
{
public:
    int missingNumber(vector<int> &nums)
    {
        int n = nums.size();
        int sum = 0;
        for (int ele : nums)
        {
            sum += ele;
        }
        int expectedSum = (n * (n + 1)) / 2;

        return expectedSum - sum;
    }
};