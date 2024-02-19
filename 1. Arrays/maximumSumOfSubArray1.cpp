#include <iostream>
#include <climits>
using namespace std;

// maximum sum of sub arrays - 1 - Brute Force
// Time Complexity: O(N^3)

void maximumSumOfSubarray1(int arr[], int n)
{
    int maxSum = INT_MIN;
    for (int i = 0; i < n; i++)
    {
        for (int j = i; j < n; j++)
        {
            int currSum = 0;
            for (int k = i; k < j; k++)
            {
                currSum += arr[k];
            }
            maxSum = max(maxSum, currSum);
        }
    }

    cout << "maximumSumOfSubarray is:" << maxSum;
}

int main()
{
    int arr[] = {-2, 3, 4, -1, 5, -12, 6, 1, 3};
    int n = sizeof(arr) / sizeof(arr[0]);
    maximumSumOfSubarray1(arr, n);
    return 0;
}