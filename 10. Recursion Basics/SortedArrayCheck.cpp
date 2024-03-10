#include <iostream>
using namespace std;

bool checkSortedArray(int arr[], int n)
{
    // Base case
    if (n == 1 || n == 0)
        return true;

    // Recursive case
    if (arr[0] < arr[1] && checkSortedArray(arr + 1, n - 1))
        return true;

    return false;
}

bool checkSortedArrayTwo(int arr[], int i, int n)
{
    // Base Case
    if (i == n - 1 || i == n)
        return true;

    // Recursive case
    if (arr[i] < arr[i + 1] && checkSortedArrayTwo(arr, i + 1, n))
    {
        return true;
    }

    return false;
}

int main()
{
    // int arr[] = {1, 2, 3, 4, 5};
    // int arr[] = {1, 2, 8, 3, 4, 5};
    int arr[] = {};
    int n = sizeof(arr) / sizeof(arr[0]);
    // boolalpha is used to print true instead of 1 and viceversa for false(0)
    cout << boolalpha << checkSortedArray(arr, n) << endl;
    cout << boolalpha << checkSortedArrayTwo(arr, 0, n);
    return 1;
}