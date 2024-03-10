class Solution
{
public:
    int strStr(string haystack, string needle)
    {
        int n = haystack.length();
        int m = needle.length();

        if (m > n)
            return -1;
        if (haystack.compare(needle) == 0)
            return 0;

        int s = 0;

        while ((s + m - 1) < n)
        {
            if (haystack.substr(s, m).compare(needle) == 0)
                return s;
            s++;
        }
        return -1;
    }
};