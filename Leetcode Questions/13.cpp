class Solution
{
public:
    int romanToInt(string str)
    {

        unordered_map<char, int> mp;

        mp.insert({'I', 1});
        mp.insert({'V', 5});
        mp.insert({'X', 10});
        mp.insert({'L', 50});
        mp.insert({'C', 100});
        mp.insert({'D', 500});
        mp.insert({'M', 1000});

        int n = str.length();
        int ans = 0;

        for (int i = 0; i < n; i++)
        {
            if (mp[str[i]] < mp[str[i + 1]])
            {
                ans -= mp[str[i]];
            }
            else
            {
                ans += mp[str[i]];
            }
        }
        return ans;
    }
};