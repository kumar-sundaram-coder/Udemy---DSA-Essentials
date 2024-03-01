class Solution
{
public:
    string maximumOddBinaryNumber(string s)
    {

        int n = s.length();
        if (n <= 1)
        {
            return s;
        }
        int countOnes = 0;

        for (char c : s)
        {
            if (c == '1')
            {
                countOnes++;
            }
        }

        s[n - 1] = '1';
        countOnes--;

        for (int i = 0; i < n - 1; i++)
        {
            if (countOnes != 0)
            {
                s[i] = '1';
                countOnes--;
            }
            else
            {
                s[i] = '0';
            }
        }
        return s;
    }
};