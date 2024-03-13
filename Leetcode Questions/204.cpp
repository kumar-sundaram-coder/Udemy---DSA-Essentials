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