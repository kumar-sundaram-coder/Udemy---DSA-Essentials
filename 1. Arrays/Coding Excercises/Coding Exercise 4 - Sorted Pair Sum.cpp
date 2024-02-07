
// My intuitive approach | brute force
// Time Complexity O(N^2)
/*
#include <bits/stdc++.h>
using namespace std;

pair<int, int> closestSum(vector<int> arr, int tar)
{
    // your code goes here
    pair<int, int> ans;
    int minDiff = INT_MAX;
    int n = arr.size();
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            int currSum = arr[i] + arr[j];
            int diff = abs(tar - currSum);
            if (diff < minDiff)
            {
                ans.first = arr[i];
                ans.second = arr[j];
                minDiff = diff;
            }
        }
    }
    return ans;
}*/

// My second approach, utilizing the fact that the array is "sorted"
// Time Complexity O(N)

#include <bits/stdc++.h>
using namespace std;

pair<int, int> closestSum(vector<int> arr, int tar)
{
    // your code goes here
    pair<int, int> ans;
    int minDiff = INT_MAX;
    int n = arr.size();
    int start = 0;
    int end = n - 1;

    while (start < end)
    {
        int currSum = arr[start] + arr[end];
        int diff = abs(tar - currSum);
        if (diff < minDiff)
        {
            ans.first = arr[start];
            ans.second = arr[end];
            minDiff = diff;
        }
        if (currSum > tar)
        {
            end--;
        }
        else
        {
            start++;
        }
    }

    return ans;
}