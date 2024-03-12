class Solution
{
public:
    void addToAns(string &ans, int i, int j, string s)
    {
        if (ans == "")
            ans += s.substr(j, (i - j + 1));
        else
            ans += " " + s.substr(j, (i - j + 1));
    }
    string reverseWords(string s)
    {
        string ans = "";
        int n = s.length();
        int i = n - 1, j = n - 1;
        while (i >= 0)
        {
            if (s[i] != ' ')
            {
                j = i;

                while (j >= 0 && s[j] != ' ')
                {
                    j--;
                }
                addToAns(ans, i, j + 1, s);
                i = j + 1;
            }
            i--;
        }

        return ans;
    }
};