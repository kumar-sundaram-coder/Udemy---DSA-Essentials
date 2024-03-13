// Method- 1 | Using Stack
class Solution
{
public:
    string removeStars(string s)
    {
        stack<char> stk;
        for (int i = 0; i < s.length(); i++)
        {
            if (!s.empty() && s[i] == '*')
                stk.pop();
            else
            {
                stk.push(s[i]);
            }
        }
        s = "";
        while (!stk.empty())
        {
            char ele = stk.top();
            s.push_back(ele);
            // s+=ele;
            stk.pop();
        }
        reverse(s.begin(), s.end());
        return s;
    }
};

// Method - 2 | Using Two pointers

class Solution
{
public:
    string removeStars(string s)
    {
        int j = 0;
        for (int i = 0; i < s.length(); i++)
        {
            if (s[i] == '*')
            {
                j--;
            }
            else
            {
                s[j] = s[i];
                j++;
            }
        }
        return s.substr(0, j);
    }
};

// Note: Since the operation can be performed on the string thus, a test case like "***s" is invalid as we don't have any character on the left  before a '*'. But in case this condition was not mentioned in the question then the above code might fail as we are doing j-- and if j goes to a negative value then doing s[j] will lead to an error! as -ive idx doesn't exist for the array