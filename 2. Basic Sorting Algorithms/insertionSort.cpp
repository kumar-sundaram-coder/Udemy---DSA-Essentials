#include <iostream>
using namespace std;

void insertionSortIncreasing(int arr[], int n)
{

    for (int i = 1; i < n; i++)
    {
        int curr = arr[i];
        int prev = i - 1;
        // loop to find the right index where the curr element should be inserted
        while (prev >= 0 && arr[prev] > curr)
        {
            arr[prev + 1] = arr[prev];
            prev--;
        }
        arr[prev + 1] = curr;
    }
}

void insertionSortDecreasing(int arr[], int n)
{

    for (int i = 1; i < n; i++)
    {
        int curr = arr[i];
        int prevIdx = i - 1;
        // loop to find the right index where the curr element should be inserted
        while (prevIdx >= 0 && arr[prevIdx] < curr)
        {
            arr[prevIdx + 1] = arr[prevIdx];
            prevIdx--;
        }
        arr[prevIdx + 1] = curr;
    }
}

int main()
{
    int arr[] = {5, 4, 3, 2, 1};
    int n = sizeof(arr) / sizeof(arr[0]);

    // print the array before insertion sort
    for (auto val : arr)
    {
        cout << val << "\t";
    }
    cout << endl;

    // insertion sort - increasing order
    insertionSortIncreasing(arr, n);

    // print the array after insertion sort - in increasing order
    for (auto val : arr)
    {
        cout << val << "\t";
    }
    cout << endl;

    // insertion sort - decreasing order
    insertionSortDecreasing(arr, n);

    // print the array after insertion sort - in decreasing order
    for (auto val : arr)
    {
        cout << val << "\t";
    }
    cout << endl;

    return 0;
}