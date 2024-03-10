#include <bits/stdc++.h>
using namespace std;

void increasingNumbersHelper(int N, vector<int> &ans)
{
    // Base Case
    if (N == 0)
    {
        return;
    }

    // Recursive Case
    increasingNumbersHelper(N - 1, ans);
    ans.push_back(N);
}

vector<int> increasingNumbers(int N)
{
    vector<int> ans;
    increasingNumbersHelper(N, ans);
    return ans;
}