#include <bits/stdc++.h>
using namespace std;

int lowerBound(vector<int> A, int Val)
{
    // Method - 1 | My Solution
    /*
    int n = A.size();
    if (n >= 0 && A[0] > Val)
    {
        return -1;
    }
    int start = 0;
    int end = n - 1;
    int lowerBound;
    while (start <= end)
    {
        int mid = (start + end) / 2;
        lowerBound = A[mid];

        if (A[mid] == Val)
        {
            return A[mid];
        }
        else if (A[mid] > Val)
        {
            end = mid - 1;
        }
        else
        {
            start = mid + 1;
        }
    }
    return lowerBound;
    */

    // Method 2 | Video Solution

    int n = A.size();
    int start = 0;
    int end = n - 1;
    int lowerBound = -1;

    while (start <= end)
    {
        int mid = (start + end) / 2;

        if (Val >= A[mid])
        {
            lowerBound = A[mid];
            start = mid + 1;
        }
        else
        {
            end = mid - 1;
        }
    }
    return lowerBound;
}