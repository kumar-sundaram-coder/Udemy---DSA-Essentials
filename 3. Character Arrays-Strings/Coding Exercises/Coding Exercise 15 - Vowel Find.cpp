#include <bits/stdc++.h>
using namespace std;

string vowel(string S)
{
    // your code goes here
    string ans;
    for (auto letter : S)
    {
        if (letter == 'a' or letter == 'e' or letter == 'i' or letter == 'o' or letter == 'u' or
            letter == 'A' or letter == 'E' or letter == 'I' or letter == 'O' or letter == 'U')
        {
            ans.push_back(letter);
        }
    }

    return ans;
}