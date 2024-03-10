class Solution
{
public:
    bool isValid(string s)
    {
        if (s == "")
            return true;
        if (s.length() == 1)
            return false;
        stack<char> stackk;

        for (auto ele : s)
        {
            if (ele == '(' || ele == '{' || ele == '[')
            {
                stackk.push(ele);
            }
            else
            {

                if (stackk.empty())
                    return false;

                char topp = stackk.top();
                if ((ele == ')' && topp == '(') ||
                    (ele == '}' && topp == '{') ||
                    (ele == ']' && topp == '['))
                {
                    stackk.pop();
                }
                else
                {
                    return false;
                }
            }
        }
        return stackk.empty() ? true : false;
    }
};