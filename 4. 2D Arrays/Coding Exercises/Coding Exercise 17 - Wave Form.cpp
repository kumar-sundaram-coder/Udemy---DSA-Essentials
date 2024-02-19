#include <bits/stdc++.h>
using namespace std;

vector<int> WavePrint(int m, int n, vector<vector<int>> arr)
{
    // your code goes here

    int SR = 0;
    int ER = m - 1;
    int SC = 0;
    int EC = n - 1;

    vector<int> waveFormVec;

    bool toggleFlag = true;
    for (int col = EC; col >= SC; col--)
    {
        if (toggleFlag == true)
        {
            for (int row = SR; row <= ER; row++)
            {
                waveFormVec.push_back(arr[row][col]);
            }
            toggleFlag = false;
        }
        else
        {
            for (int row = ER; row >= SR; row--)
            {
                waveFormVec.push_back(arr[row][col]);
            }
            toggleFlag = true;
        }
    }
    return waveFormVec;
}
