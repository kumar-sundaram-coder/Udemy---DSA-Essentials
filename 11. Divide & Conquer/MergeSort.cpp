#include <iostream>
#include <vector>
using namespace std;

void merge(vector<int> &arr, int s, int e, int mid)
{
    vector<int> temp;
    int i = s, j = mid + 1;

    while (i <= mid && j <= e)
    {
        if (arr[i] < arr[j])
        {
            temp.push_back(arr[i]);
            i++;
        }
        else
        {
            temp.push_back(arr[j]);
            j++;
        }
    }

    // if elements is remaining in the first array then copy the entire remaining array into temp
    while (i <= mid)
    {
        temp.push_back(arr[i]);
        i++;
    }

    // else if elements is remaining in the second array then copy the entire remaining array into temp
    while (j <= e)
    {
        temp.push_back(arr[j]);
        j++;
    }

    // now copy the temp array back to the original array
    int k = 0;
    for (int idx = s; idx <= e; idx++)
    {
        arr[idx] = temp[k];
        k++;
    }
}

void mergeSort(vector<int> &arr, int s, int e)
{
    // Base case
    if (s >= e)
        return;

    // Recursive case
    int mid = s + (e - s) / 2;  // int mid = (s + e)/2;
    mergeSort(arr, s, mid);     // recursively merge the left part
    mergeSort(arr, mid + 1, e); // recursively merge the right part

    // merge both these parts basically
    merge(arr, s, e, mid);
}

int main()
{
    vector<int> arr = {8, 7, 6, 5, 4, 3, 2, 1};

    int n = arr.size();
    mergeSort(arr, 0, n - 1);

    for (auto ele : arr)
    {
        cout << ele << "\t";
    }
    cout << endl;
    return 0;
}