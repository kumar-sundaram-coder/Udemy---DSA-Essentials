// Method - 1 | Using set and two - pointers
class Solution
{
public:
    int lengthOfLongestSubstring(string s)
    {
        int ans = 0;

        unordered_set<char> set;
        int n = s.length();
        int i = 0;

        for (int j = 0; j < n; j++)
        {
            if (set.find(s[j]) != set.end())
            {

                while (i < j && set.find(s[j]) != set.end())
                {
                    set.erase(s[i]);
                    i++;
                }
            }
            set.insert(s[j]);
            ans = max(ans, j - i + 1);
        }
        return ans;
    }
};

// Method - 2 | Using set and two - pointers - similar to method 1 just slight difference code wise.... | On leetcode its running faster than method 1

class Solution
{
public:
    int lengthOfLongestSubstring(string s)
    {
        int n = s.length();
        unordered_set<char> set;
        int ans = 0;

        int l = 0, r = 0;

        while (l < n and r < n)
        {
            if (set.find(s[r]) == set.end())
            {
                set.insert(s[r]);
                ans = max(ans, r - l + 1);
                r++;
            }
            else
            {
                set.erase(s[l]);
                l++;
            }
        }
        return ans;
    }
};