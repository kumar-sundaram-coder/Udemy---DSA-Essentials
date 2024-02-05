#include <iostream>
#include <climits>
using namespace std;

// maximum sum of sub arrays - 3 - Kadane Algorithm
// Time Complexity: O(N)
// Note, kadane algo will fail for all negative numbers in the arr as it will give 0 as the answer, and thus all negative case should be handled seperately and if only negatives are found then we will return the largest number among all those by seperately checking the arr in a loop and take a allNegative flag and largest val, and whenever we find a positive val we make this flag true and if it remain false even after traversing the full arr then we will return the largest val as that's the subarray with max sum(single element subarray)
void maximumSumOfSubarray3(int arr[], int n)
{
    int maxSum = INT_MIN;
    int currentSum = 0;
    for (int i = 0; i < n; i++)
    {
        currentSum += arr[i];
        if (currentSum < 0)
        {
            currentSum = 0;
        }
        maxSum = max(maxSum, currentSum);
    }
    cout << "maximumSumOfSubarray:" << maxSum;
}

int main()
{
    int arr[] = {-2, 3, 4, -1, 5, -12, 6, 1, 3};
    int n = sizeof(arr) / sizeof(arr[0]);
    maximumSumOfSubarray3(arr, n);
    return 0;
}

/*
#include <bits/stdc++.h>
using namespace std;

int maxSumSubarray(vector<int> A)
{
// Kadane's Algo + Special case handling

    int allNegFlag = true;
    int largestElement = INT_MIN;

    //  check if all are negative in the array if yes, then this is the special case and normal kadane fails for this if not handled seperately

    for (int val : A)
    {
        if (val >= 0)
        {
            allNegFlag = false;
        }
        largestElement = max(largestElement, val);
    }

    if (allNegFlag == true)
    {
        return largestElement;
    }

    // if it reaches here, then it means not a special case and normal kadane can handle this easily

    int maxSum = INT_MIN;
    int currSum = 0;

    for (int i = 0; i < A.size(); i++)
    {
        currSum += A[i];
        if (currSum < 0)
            currSum = 0;

        maxSum = max(maxSum, currSum);
    }

    return maxSum;
}
*/