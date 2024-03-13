class Solution
{
public:
    bool isPalindrome(string s)
    {
        int n = s.length();
        if (n == 0)
            return true;

        string temp;
        for (int i = 0; i < n; i++)
        {
            if (isalnum(s[i]))
            {
                if (isalpha(s[i]))
                    temp.push_back(tolower(s[i]));
                else
                    temp.push_back(s[i]);
            }
        }

        int start = 0;
        int end = temp.length() - 1;
        while (start <= end)
        {
            if (temp[start] != temp[end])
            {
                return false;
            }
            start++;
            end--;
        }
        return true;
    }
};