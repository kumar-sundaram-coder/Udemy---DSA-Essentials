#include <bits/stdc++.h>
using namespace std;

void findAllOccurencesIndex(int k, vector<int> v, int i, vector<int> &ans)
{
    // Base case
    if (i == v.size())
        return;

    // Recursive case
    if (v[i] == k)
    {
        ans.push_back(i);
    }

    findAllOccurencesIndex(k, v, i + 1, ans);
}
vector<int> findAllOccurences(int k, vector<int> v)
{
    vector<int> ans;
    findAllOccurencesIndex(k, v, 0, ans);
    return ans;
}