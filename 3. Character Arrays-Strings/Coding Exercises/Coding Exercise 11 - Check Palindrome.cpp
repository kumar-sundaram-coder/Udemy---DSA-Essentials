#include <bits/stdc++.h>
using namespace std;

bool isPalindrome(string str)
{
    // your code goes here
    int n = str.length();
    for (int i = 0, j = n - 1; i < j, i <= n / 2, j >= n / 2; i++, j--)
    {
        if (str[i] != str[j])
        {
            return false;
        }
    }
    return true;
}