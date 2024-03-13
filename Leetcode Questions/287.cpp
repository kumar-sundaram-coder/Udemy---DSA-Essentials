// Method -1 | Using an unordered_set

// Sieve of Eratosthenes
class Solution
{
public:
    int countPrimes(int n)
    {
        if (n <= 2)
            return 0;
        vector<int> isPrime(n, true);

        for (int p = 2; p * p < n; p++)
        {
            if (isPrime[p])
            {
                for (int i = p * p; i < n; i = i + p)
                {
                    isPrime[i] = false;
                }
            }
        }
        int count = 0;
        for (int i = 2; i < n; i++)
        {
            if (isPrime[i])
            {
                count++;
            }
        }
        return count;
    }
};

// Method - 2 | Using a visited vector

class Solution
{
public:
    int findDuplicate(vector<int> &nums)
    {
        ios_base::sync_with_stdio(false);
        cin.tie(NULL);
        int n = nums.size();
        vector<int> a(n, 0);
        for (int i = 0; i < n; i++)
        {
            a[nums[i]]++;
            if (a[nums[i]] > 1)
                return nums[i];
        }
        return -1;
    }
};