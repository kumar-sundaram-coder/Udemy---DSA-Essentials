#include <bits/stdc++.h>
using namespace std;

int xoring(vector<int> v)
{
    // your code goes here
    int ans = 0;
    for (int i = 0; i < v.size(); i++)
    {
        ans = ans ^ v[i];
    }
    return ans;
}