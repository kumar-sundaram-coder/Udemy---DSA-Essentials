// Method - 1 | converting to string and then reversing the string and then comparing both strings
class Solution
{
public:
    bool isPalindrome(int x)
    {
        // negative number can't be a palindrome
        if (x < 0)
            return false;
        // zero(0) is always a palindrome
        if (x == 0)
            return true;

        // convert the int to a string by using to_string() fxn
        string s = to_string(x);

        // revStr is basically to store the reversed string
        string revStr = s;
        reverse(revStr.begin(), revStr.end());

        // check if the reversed string and original string are same, if yes, then it is a palindrome!
        if (s.compare(revStr) == 0)
            return true;
        return false;
    }
};

// Method - 2 | converting to string and then using 2 pointer to check palindrome
class Solution
{
public:
    bool isPalindrome(int x)
    {
        // negative number can't be a palindrome
        if (x < 0)
            return false;
        // zero(0) is always a palindrome
        if (x == 0)
            return true;

        // convert the int to a string by using to_string() fxn
        string s = to_string(x);
        int n = s.length();
        for (int i = 0, j = n - 1; i <= j; i++, j--)
        {
            if (s[i] != s[j])
            {
                return false;
            }
        }
        return true;
    }
};