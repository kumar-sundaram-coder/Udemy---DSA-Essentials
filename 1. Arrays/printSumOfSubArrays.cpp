#include <iostream>
#include <climits>
using namespace std;

void printSumOfAllTheSubArray(int arr[], int n)
{
    int maxSum = INT_MIN;
    // traverse all the subarrays and find their sum and if it's greater than maxSum so far, then override the maxSum with that

    for (int i = 0; i < n; i++)
    {
        for (int j = i; j < n; j++)
        {
            int currentSubArraySum = 0;
            cout << "Current Sub Array is: ";
            for (int k = i; k <= j; k++)
            {
                cout << arr[k] << ",";
                currentSubArraySum += arr[k];
            }
            cout << endl
                 << "Current Sub Array's Sum is: " << currentSubArraySum << endl
                 << endl;
            if (maxSum < currentSubArraySum)
            {
                maxSum = currentSubArraySum;
            }
        }
    }
    if (maxSum != INT_MIN)
    {
        cout << "Maximum sum of the Sub Arrays is:" << maxSum;
    }
    else
    {
        cout << "Array doesn't contain any element!!!";
    }
}

int main()
{
    int arr[] = {1, 2, 3, 4, 5};
    int n = sizeof(arr) / sizeof(arr[0]);
    // print the array
    for (int val : arr)
    {
        cout << val << "\t";
    }
    cout << endl
         << endl;

    printSumOfAllTheSubArray(arr, n);

    return 0;
}