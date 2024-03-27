// Method - 1 | Using Prefix Sum | O(N^2) | TLE on Leetcode! | All tests passing but still TLE!

class Solution
{
public:
    int subarraySum(vector<int> &nums, int k)
    {
        int n = nums.size();
        if (n == 1)
            return nums[0] == k ? 1 : 0;

        vector<int> prefixSum(n);
        prefixSum[0] = nums[0];
        for (int i = 1; i < n; i++)
        {
            prefixSum[i] = prefixSum[i - 1] + nums[i];
        }

        int i = 0, j = 0;
        int ans = 0;

        while (j < n)
        {
            if (i == j and prefixSum[j] == k)
                ans++;
            if (i != j and prefixSum[j] - prefixSum[i] == k)
                ans++;

            j++;
            if (j == n)
            {
                i++;
                j = i;
            }
        }
        return ans;
    }
};

// Method -2 | Using Map and prefix sum variable | O(N) Time and Space both

class Solution
{
public:
    int subarraySum(vector<int> &nums, int k)
    {
        unordered_map<int, int> mp;
        mp.insert({0, 1}); // for subarray with sum =0, there exists an empty subarray, thus we inserted this pair...
        int ans = 0;
        int prefixSum = 0; // this will keep track of prefix sum so far
        for (int ele : nums)
        {
            prefixSum = prefixSum + ele;   // adding the val of curr ele to the prefixSum
            ans = ans + mp[prefixSum - k]; // increasing the value of ans by the frequency/val of the mp where key is equal to prefixSum - k, cz at current ele, let's say the prefixSum is 10 and k=3 so, we would require a subarray whose sum was 7 i.e., 10-3, suchh that we can subtract the current subarray with the subarray, and thus the remaining elements will have a sum of 7!
            // sum(i,j)=sum(0,j)-sum(0,i), where sum(i,j) represents the sum of all the elements from index i to j-1.

            mp[prefixSum]++; // this will insert a new entry or if already exists then increases the value of that prefixSum by 1
        }
        return ans;
    }
};