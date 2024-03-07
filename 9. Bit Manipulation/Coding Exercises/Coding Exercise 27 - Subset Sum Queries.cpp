#include <bits/stdc++.h>
using namespace std;

#define MAXSUM 10000

void preprocessBitset(vector<int> num, int n, bitset<MAXSUM> &bitset)
{
    bitset.reset();
    bitset[0] = 1;
    for (int i = 0; i < n; i++)
    {
        bitset = bitset | (bitset << num[i]);
    }
}

void findSubsetSum(vector<int> query, bitset<MAXSUM> bitset, vector<bool> &ans)
{

    for (int q : query)
    {
        if (q > MAXSUM)
        {
            ans.push_back(false);
        }
        else if (bitset[q])
        {
            ans.push_back(true);
        }
        else
        {
            ans.push_back(false);
        }
    }
}

vector<bool> subsetSum(vector<int> num, vector<int> query)
{
    vector<bool> ans;
    bitset<MAXSUM> bitset;

    preprocessBitset(num, num.size(), bitset);
    findSubsetSum(query, bitset, ans);
    return ans;
}


Reference: https://www.geeksforgeeks.org/subset-sum-queries-using-bitset/
