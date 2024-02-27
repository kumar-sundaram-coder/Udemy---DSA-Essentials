#include <bits/stdc++.h>
using namespace std;

vector<vector<int>> printPascal(int n)
{
    // your code goes here
    vector<vector<int>> pascalT(n, vector<int>());

    pascalT[0] = {1};

    for (int i = 1; i < n; i++)
    {
        for (int j = 0; j <= i; j++)
        {
            if (j == 0 || j == i)
            {
                pascalT[i].push_back(1);
            }
            else
            {
                int val = pascalT[i - 1][j] + pascalT[i - 1][j - 1];
                pascalT[i].push_back(val);
            }
        }
    }

    // printing the pascal Triangle
    for (auto vec : pascalT)
    {
        for (auto val : vec)
        {
            cout << val << "\t";
        }
        cout << "\n";
    }

    return pascalT;
}
