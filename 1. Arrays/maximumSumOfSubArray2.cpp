#include <iostream>
#include <climits>
using namespace std;

// maximum sum of sub arrays - 2 - Prefix sum
// Time Complexity: O(N^2)

void maximumSumOfSubarray2(int arr[], int n)
{
    // Calculate the prefix sum array before hand, this will have:-
    //  O(N) Time Complexity and O(N) Space Complexity
    int prefixSum[100] = {0};
    prefixSum[0] = arr[0];
    for (int i = 1; i < n; i++)
    {
        prefixSum[i] = prefixSum[i - 1] + arr[i];
    }

    // now we can easily calculate the curr sum by subtracting the prefix sum till j with prefix sum till i-1, and in case i=0 then the i-1 will yield -1 which is indexOutOfBound thus upon observation we see that currSum from i=0 to j is equal to prefix sum till j only

    int maxSum = INT_MIN;
    for (int i = 0; i < n; i++)
    {
        for (int j = i; j < n; j++)
        {
            int currSum = 0;

            currSum = i > 0 ? prefixSum[j] - prefixSum[i - 1] : prefixSum[j];

            maxSum = max(maxSum, currSum);
        }
    }

    cout << "maximumSumOfSubarray is:" << maxSum;
}

int main()
{
    int arr[] = {-2, 3, 4, -1, 5, -12, 6, 1, 3};
    int n = sizeof(arr) / sizeof(arr[0]);
    maximumSumOfSubarray2(arr, n);
    return 0;
}