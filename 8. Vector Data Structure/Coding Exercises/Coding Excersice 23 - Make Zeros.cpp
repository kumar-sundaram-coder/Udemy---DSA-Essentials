#include <bits/stdc++.h>
using namespace std;

vector<vector<int>> makeZeroes(vector<vector<int>> arr)
{
    // your code goes here
    int n = arr.size();
    vector<int> rows(n, 0);
    vector<int> cols(n, 0);

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (arr[i][j] == 0)
            {
                rows[i] = 1;
                cols[j] = 1;
            }
        }
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (rows[i] == 1 || cols[j] == 1)
            {
                arr[i][j] = 0;
            }
        }
    }

    return arr;
}