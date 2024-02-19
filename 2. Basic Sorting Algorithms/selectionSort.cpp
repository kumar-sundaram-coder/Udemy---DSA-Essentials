#include <iostream>
using namespace std;

void selectionSortIncreasing(int arr[], int n)
{
    for (int i = 0; i < n - 1; i++)
    {
        int min_idx = i;

        for (int j = i + 1; j < n; j++)
        {
            if (arr[j] < arr[min_idx])
            {
                min_idx = j;
            }
        }

        if (min_idx != i)
        {
            swap(arr[min_idx], arr[i]);
        }
    }
}

void selectionSortDecreasing(int arr[], int n)
{

    for (int i = 0; i < n - 1; i++)
    {
        int max_idx = i;
        for (int j = i + 1; j < n; j++)
        {
            if (arr[j] > arr[max_idx])
            {
                max_idx = j;
            }
        }
        if (max_idx != i)
        {
            swap(arr[max_idx], arr[i]);
        }
    }
}

int main()
{
    int arr[] = {5, 4, 3, 2, 1};
    int n = sizeof(arr) / sizeof(arr[0]);

    // print the array before selection sort
    for (auto val : arr)
    {
        cout << val << "\t";
    }
    cout << endl;

    // selection sort - increasing order
    selectionSortIncreasing(arr, n);

    // print the array after selection sort
    for (auto val : arr)
    {
        cout << val << "\t";
    }
    cout << endl;

    // selection sort - decreasing order
    selectionSortDecreasing(arr, n);

    // print the array after selection sort
    for (auto val : arr)
    {
        cout << val << "\t";
    }
    cout << endl;

    return 0;
}