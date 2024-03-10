#include <iostream>
using namespace std;

int findFirstOccurance(int arr[], int n, int key)
{
    // Base case
    if (n == 0)
        return -1;

    // Recursive case
    if (arr[0] == key)
        return 0;

    int subIndex = findFirstOccurance(arr + 1, n - 1, key);
    if (subIndex != -1)
    {
        return subIndex + 1;
    }
    return -1;
}
int main()
{
    int arr[] = {1, 2, 8, 3, 4, 5};
    int n = sizeof(arr) / sizeof(arr[0]);
    int key = 8;
    cout << findFirstOccurance(arr, n, key) << endl;
    return 0;
}