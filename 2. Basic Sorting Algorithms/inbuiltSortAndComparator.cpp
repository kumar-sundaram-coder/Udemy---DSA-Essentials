#include <iostream>
#include <algorithm>
using namespace std;

bool compare(int a, int b)
{
    return a > b; // this is a comparator fxn for desc order, if we want incr order then, the statement would be return a < b; but we don't need it as by default sort gives the array in incr order only!
}

int main()
{
    int arr[] = {5, 4, 1, 2, 3};
    int n = sizeof(arr) / sizeof(arr[0]);
    // print before sorting
    for (int val : arr)
    {
        cout << val << "\t";
    }
    cout << endl;

    // To sort an array in increasing order
    sort(arr, arr + n);

    // print after sorting
    for (int val : arr)
    {
        cout << val << "\t";
    }
    cout << endl;

    // Method -1 | to sort in decreasing order
    /*
        sort(arr, arr + n);    // this will be in increasing order
        reverse(arr, arr + n); // this will reverse the increasing sorted arr and give a decreasing order arr
        // print after sorting
        for (int val : arr)
        {
            cout << val << "\t";
        }
        cout << endl;
    */
    // Method - 2 | to sort in decreasing order using a custom comparator
    /*
    sort(arr, arr + n, compare);
    // print after sorting
    for (int val : arr)
    {
        cout << val << "\t";
    }
    cout << endl;
    */

    // Method - 3 | to sort in decreasing order using a inbuilt comparator -> greater<int>() & we would use less<int>() -> to sort the array in incr order -> by default we don't need to pass this!
    sort(arr, arr + n, greater<int>());
    // print after sorting
    for (int val : arr)
    {
        cout << val << "\t";
    }
    cout << endl;

    return 0;
}