#include <iostream>
using namespace std;

// Time Complexity: O(LogN)
void binarySearch()
{
    int arr[] = {1, 2, 3, 4, 5, 6, 7};
    int n = sizeof(arr) / sizeof(arr[0]);
    int key;

    cout << "Enter the value of key: \n";
    cin >> key;

    // Binary search logic

    int start = 0;
    int end = n - 1;
    int foundFlag = 0;
    while (start <= end)
    {
        int mid = (end + start) / 2; // int mid = {end - (end -start)/2} -> use it when the size is too large and end+start might exceed the int range

        if (key == arr[mid])
        {
            cout << key << " Found at the index:" << mid << endl;
            foundFlag = 1;
            break;
        }
        else if (key > arr[mid])
        {
            start = mid + 1;
        }
        else // (key < arr[mid])
        {
            end = mid - 1;
        }
    }
    if (foundFlag != 1)
    {
        cout << key << " is NOT PRESENT !!!";
    }
}

int main()
{

    binarySearch();

    return 0;
}