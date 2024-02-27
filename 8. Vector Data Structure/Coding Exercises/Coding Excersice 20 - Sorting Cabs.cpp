#include <bits/stdc++.h>
using namespace std;

bool compare(pair<int, int> a, pair<int, int> b)
{
    return (a.first + a.second) < (b.first + b.second);
}

vector<pair<int, int>> sortCabs(vector<pair<int, int>> v)
{
    // your code  goes here
    sort(v.begin(), v.end(), compare);
    return v;
}