#include <iostream>
#include <climits>
using namespace std;

// maximum sum of sub arrays - 3 - Kadane Algorithm
// Time Complexity: O(N)

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