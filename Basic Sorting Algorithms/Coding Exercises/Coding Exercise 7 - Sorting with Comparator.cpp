#include <bits/stdc++.h>
using namespace std;

vector<int> sortingWithComparator(vector<int> a, bool flag)
{
    // your code  goes here
    if (flag)
    {
        sort(a.begin(), a.end(), less<int>());
    }
    else
    {
        sort(a.begin(), a.end(), greater<int>());
    }
    return a;
}