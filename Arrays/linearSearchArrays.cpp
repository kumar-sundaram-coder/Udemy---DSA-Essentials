#include <iostream>

using namespace std;

// Time Complexity: O(N)

// linearSearchInArray

int linearSearch(int arr[], int n, int key)
{

    // linear search main logic
    for (int i = 0; i < n; i++)
    {
        if (arr[i] == key)
        {
            return i;
        }
    }
    return -1;
}

int main()
{

    int arr[100];
    int n;
    cout << "Enter the value of n: \t";
    cin >> n;
    cout << endl;

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    cout << endl;

    int key;
    cout << "Enter the value of key that you want to find by Linear search: \t";
    cin >> key;

    cout << endl;

    int index = linearSearch(arr, n, key);
    if (index != -1)
    {

        cout << key << " is present at the index: " << index << endl;
    }
    else
    {
        cout << key << " is NOT present!!!" << endl;
    }

    return 0;
}
