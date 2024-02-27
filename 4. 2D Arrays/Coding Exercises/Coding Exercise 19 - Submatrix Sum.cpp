/*
#include <bits/stdc++.h>
using namespace std;

// brute force solution, might give TLE if according to the question multiple queries is run on the same matrix thus we'll have to think of sum prefix sum array sorta appproach

// Time Complexity : O(N*M) ~> O(N^2)
int sum(vector<vector<int>> v, int sr, int sc, int er, int ec)
{
    // your code goes here
    int sum = 0;

    for (int row = sr; row <= er; row++)
    {
        for (int col = sc; col <= ec; col++)
        {
            sum += v[row][col];
        }
    }
    return sum;
}
*/

// Optimized Solution - using prefix sum array(2D)

// Time:O(N^2) & Space: O(N^2) this is optimized in case of multiple queries are bombarded and we have pefix sum array, then we can easily fetch the answer in O(1)

#include <bits/stdc++.h>
using namespace std;

int sum(vector<vector<int>> v, int sr, int sc, int er, int ec)
{

    // your code goes here
    int sum = 0;

    int n = v.size();
    int m = v[0].size();

    // create a prefix sum array
    vector<vector<int>> preVec(n, vector<int>(m, 0));

    preVec[0][0] = v[0][0];

    // fill the first column
    for (int row = 1; row < n; row++)
    {
        preVec[row][0] = v[row][0] + preVec[row - 1][0];
    }

    // fill the first row
    for (int col = 1; col < m; col++)
    {
        preVec[0][col] = v[0][col] + preVec[0][col - 1];
    }

    // fill the rest values
    for (int i = 1; i < n; i++)
    {
        for (int j = 1; j < m; j++)
        {
            preVec[i][j] = (preVec[i - 1][j] + preVec[i][j - 1] - preVec[i - 1][j - 1]) + v[i][j];
        }
    }

    for (auto vec : preVec)
    {
        for (auto ele : vec)
        {
            cout << ele << "\t";
        }
        cout << endl;
    }

    int S1 = 0, S2 = 0, S3 = 0, S4 = 0;

    S1 = (sc == 0 || sr == 0) ? 0 : preVec[sr - 1][sc - 1];
    S2 = (sr == 0) ? 0 : preVec[sr - 1][ec];
    S3 = (sc == 0) ? 0 : preVec[er][sc - 1];
    S4 = preVec[er][ec];

    sum = S4 - (S2 + S3) + S1;

    return sum;
}
