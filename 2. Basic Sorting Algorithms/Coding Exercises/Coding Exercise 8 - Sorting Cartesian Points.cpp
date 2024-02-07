#include <bits/stdc++.h>
using namespace std;



bool compare(pair<int, int> a, pair<int, int> b)
{
    if (a.first < b.first)
    {
        return true;
    }
    else if (a.first == b.first)
    {
        return a.second < b.second;
    }
    else
    {
        return false;
    }
}
// below compare is same as above comparator, just i have optimized the if-else conditions
/*
bool compare(pair<int, int> a, pair<int, int> b)
{
    if (a.first != b.first)
    {
        return a.first < b.first;
    }
    else
    {
        return a.second < b.second;
    }
}
*/
vector<pair<int, int>> sortCartesian(vector<pair<int, int>> v)
{
    int N = v.size();

    // your code goes here
    sort(v.begin(), v.end(), compare);
    return v;
}