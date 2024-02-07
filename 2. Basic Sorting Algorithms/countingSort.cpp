#include <iostream>
#include <vector>
#include <climits>

using namespace std;
void countingSortIncreasing(int arr[], int n)
{
    int largest = INT_MIN;
    for (int i = 0; i < n; i++)
    {
        largest = max(largest, arr[i]);
    }

    // create a count array of frequency vector of size largest + 1, since indexing starts from 0 and to accomodate the largest element, the freq vector should have a size of largest + 1 (index wise)

    vector<int> freq(largest + 1, 0);

    // fill up the frequency in the freq vector according to the original array, increase the number/freq of the element occuring in the original array

    for (int i = 0; i < n; i++)
    {
        freq[arr[i]]++;
    }

    // now we have the freq map, next we need to basically override the original values by travelsing this freq map from start to end, and since we have store the freq wrt the index thus, it will always give a sorted array ..... P.S.: For decreasing order we can traverse this freq map from right to left and overide the original array, thus giving a desc sorted array

    int originalArrayIdx = 0;             // this is basically 'i', and is used to traverse the original array to insert values
    for (int j = 0; j < freq.size(); j++) // this is to traverse the freq vec/map basically
    {
        while (freq[j] > 0)
        {
            arr[originalArrayIdx] = j;
            freq[j]--;
            originalArrayIdx++;
        }
    }
}

void countingSortDecreasing(int arr[], int n)
{
    int largest = INT_MIN;
    for (int i = 0; i < n; i++)
    {
        largest = max(largest, arr[i]);
    }

    vector<int> freq(largest + 1, 0);

    for (int i = 0; i < n; i++)
    {
        freq[arr[i]]++;
    }

    int i = 0;
    for (int j = freq.size() - 1; j >= 0; j++)
    {
        while (freq[j] > 0)
        {
            arr[i] = j;
            freq[j]--;
            i++;
        }
    }
}

int main()
{
    int arr[] = {8, 7, 7, 7, 7, 7, 6, 1, 1, 1, 2, 3, 3, 4, 5};
    int n = sizeof(arr) / sizeof(arr[0]);

    // print before counting sorting:
    for (auto val : arr)
    {
        cout << val << "\t";
    }
    cout << endl;

    countingSortIncreasing(arr, n);

    // print after counting sort:
    for (auto val : arr)
    {
        cout << val << "\t";
    }
    cout << endl;

    
    // print before counting sorting:
    for (auto val : arr)
    {
        cout << val << "\t";
    }
    cout << endl;

    countingSortDecreasing(arr, n);

    // print after counting sort:
    for (auto val : arr)
    {
        cout << val << "\t";
    }
    cout << endl;

    return 0;
}