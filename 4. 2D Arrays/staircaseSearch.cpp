// Sorted 2D array search

#include <iostream>
using namespace std;

pair<int, int> staircaseSearch(int arr[][4], int n, int m, int key)
{

    // if the key is less than the smallest element and greater than the largest element then the key is not present in the matrix/2D array thus we will return a {-1,-1} as index

    if (key < arr[0][0] || key > arr[n - 1][m - 1])
    {
        return make_pair(-1, -1);
        // return {-1,-1};
    }

    int i = 0, j = m - 1;

    while (i <= n - 1 && j >= 0)
    {
        if (key == arr[i][j])
        {
            return {i, j};
        }
        else if (key > arr[i][j])
        {
            i++;
        }
        else
        {
            j--;
        }
    }

    // if we come out of the while loop then the key was not found in the complete matrix, thus we will return {-1,-1}

    return {-1, -1};
}

int main()
{
    int arr[][4] = {
        {10, 20, 30, 40},
        {15, 25, 35, 45},
        {27, 29, 37, 48},
        {32, 33, 39, 50}};
    int n = 4;
    int m = 4;
    int key = 39;

    pair<int, int> coordinates = staircaseSearch(arr, n, m, key);

    cout << "{ " << coordinates.first << ", " << coordinates.second << " }" << endl;
    return 0;
}