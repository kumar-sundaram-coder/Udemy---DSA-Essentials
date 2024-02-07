#include <iostream>
using namespace std;

void printAllPairs(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            cout << "(" << arr[i] << "," << arr[j] << ")"
                 << "\t";
        }
        cout << endl;
    }
}

int main()
{
    int arr[] = {1, 2, 3, 4};
    int n = sizeof(arr) / sizeof(arr[0]);

    // Print the array
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << "\t";
    }
    cout << endl;
    printAllPairs(arr, n);

    return 0;
}