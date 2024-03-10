#include <bits/stdc++.h>
using namespace std;

void helper(vector<string> &ans, string str, int n, int i)
{
    // Base case
    if (i == n)
    {
        ans.push_back(str);
        return;
    }

    // Recursive case

    // add 0 in the string and check for the remaining string
    string s1 = str;
    s1.push_back('0');
    helper(ans, s1, n, i + 1);

    // if string already has a prev character in it then check for the constraint i.e., no consecutive ones
    if (i != 0 && str[i - 1] != '1')
    {
        str.push_back('1');
        helper(ans, str, n, i + 1);
    }
    else if (i == 0)
    { // if we are at 0th position then it can contain a '1'
        str.push_back('1');
        helper(ans, str, n, i + 1);
    }
    // we will reach here if the prev character was '1', i.e., we have to discard this string!
    return;
}

vector<string> binaryStrings(int n)
{
    vector<string> ans;
    string str;
    helper(ans, str, n, 0);
    return ans;
}