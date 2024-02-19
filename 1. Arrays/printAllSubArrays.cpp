#include <iostream>
using namespace std;

void printAllTheSubArrays(int arr[], int n)
{

    for (int i = 0; i < n; i++)
    {
        for (int j = i; j < n; j++)
        {
            // cout<< "("<< i <<", "<<j<<")"<<endl;
            for (int k = i; k <= j; k++)
            {
                cout << arr[k] << ", ";
            }
            cout<<endl;
        }
        cout<<endl;
    }
}


int main()
{
    int arr[] = {1, 2, 3, 4, 5};
    int n = sizeof(arr) / sizeof(arr[0]);
    // print the array
    for (int val : arr)
    {
        cout << val << "\t";
    }
    cout << endl;
    printAllTheSubArrays(arr, n);

    return 0;
}