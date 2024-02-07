#include <iostream>

using namespace std;

void bubbleSortIncreasing(int arr[], int n)
{
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = 0; j < n - 1 - i; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                swap(arr[j], arr[j + 1]);
            }
        }
    }
}

void bubbleSortDecreasing(int arr[], int n)
{
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = 0; j < n - 1 - i; j++)
        {
            if (arr[j] < arr[j + 1])
            {
                swap(arr[j], arr[j + 1]);
            }
        }
    }
}

void bubbleSortIncreasingOptimised(int arr[], int n)
{
    bool swapped = false;

    for (int i = 0; i < n - 1; i++)
    {
        swapped = false;
        for (int j = 0; j < n - 1 - i; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                swap(arr[j], arr[j + 1]);
                swapped = true;
            }
        }
        if (swapped == false)
        {
            // since no 2 elements were swapped by the inner loop, thus we can break the outer loop too as all elements are in the correct place/order
            break;
        }
    }
}
int main()
{
    int arr[] = {5, 4, 3, 2, 1};
    int n = sizeof(arr) / sizeof(arr[0]);

    // print the array before bubble sort
    for (auto val : arr)
    {
        cout << val << "\t";
    }
    cout << endl;

    // bubble sort - increasing order
    bubbleSortIncreasing(arr, n);

    // print the array after bubble sort - in increasing order
    for (auto val : arr)
    {
        cout << val << "\t";
    }
    cout << endl;

    // bubble sort -decreasing order
    bubbleSortDecreasing(arr, n);
    // print the array after bubble sort - in decreasing order
    for (auto val : arr)
    {
        cout << val << "\t";
    }
    cout << endl;

    // bubble sort optimized way -> checking if the inner loop has 0 swap, this mean that the array is sorted and no need to go on further and can break the outer loop and the final desired array is obtained

    bubbleSortIncreasingOptimised(arr, n);
    // print
    for (auto val : arr)
    {
        cout << val << "\t";
    }

    return 0;
}