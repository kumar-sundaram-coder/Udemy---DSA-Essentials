#include <iostream>
#include <algorithm>
#include <climits>

using namespace std;

// maximize the minimum 1's, if the matrix is divided into 4 parts by a vetical and horizontal lines at i,j thus dividing the matrix into 4 parts.... our aim is to find the maximum 1's(mango trees) that can be found in the smallest part of these 4 parts...

// Optimized solution, in this we will be calculating the prefix sum till the index/ coordinate (i,j) and at any point (i,j) the value will be the sum of section/part formed by the points/indexes
//                 A(0,0)------B(0,j)
//                    |          |
//                    |          |
//                    |          |
//                 C(i,0)------D(i,j)  <-- prefixSum[i][j] = sum of all the 1s in the rectangle ABCD

// Time Complexity O(N^2 * 1) => O(N^2)
// Space Complexity O(N^2) -> extra space used for prefix sum 2D array
int mangoTreesOptimized(int arr[][4], int n, int m)
{
    // Create the prefix sum array
    int preArr[n][m];

    // prefill the first aka (0,0) element
    preArr[0][0] = arr[0][0];

    // prefill the first column and we will skip the row=0 as we have already prefilled the value of the first element
    for (int row = 1; row < n; row++)
    {
        preArr[row][0] = arr[row][0] + preArr[row - 1][0];
    }

    // prefill the first row and skip the first element as we have already prefilled the same
    for (int col = 1; col < m; col++)
    {
        preArr[0][col] = arr[0][col] + preArr[0][col - 1];
    }

    // now we will fill all the rest elements of the preArr

    for (int row = 1; row < n; row++)
    {
        for (int col = 1; col < m; col++)
        {
            preArr[row][col] = preArr[row][col - 1] + preArr[row - 1][col] - preArr[row - 1][col - 1];

            if (arr[row][col] == 1)
            {
                preArr[row][col] += 1;
            }
        }
    }

    // print the preArr
    for (int i = 0; i < n; i++)
    {
        cout << endl;
        for (int j = 0; j < m; j++)
        {
            cout << preArr[i][j] << "\t";
        }
    }

    // now we have preArr so we will solve the original problem i.e., maximize the minimum

    int ans = 0;

    for (int i = 0; i < n - 1; i++)
    {
        for (int j = 0; j < m - 1; j++)
        {
            int S1 = 0, S2 = 0, S3 = 0, S4 = 0;
            int minOnes = 0;

            S1 = preArr[i][j];
            S2 = preArr[i][m - 1] - S1;
            S3 = preArr[n - 1][j] - S1;
            S4 = preArr[n - 1][m - 1] - (S1 + S2 + S3);

            minOnes = min({S1, S2, S3, S4});
            ans = max(ans, minOnes);
        }
    }

    /*
    S1      |   S2
            |
---------------------
            |
    S3      |   S4

*/
    return ans;
}

int main()
{
    // Case - 1 | ans = 2
    // int arr[][4] = {
    //     {0, 0, 0, 1},
    //     {1, 0, 0, 0},
    //     {0, 1, 1, 0},
    //     {1, 1, 1, 1}};

    // Case - 2 | ans = 0

    // int arr[][4] = {
    //     {0, 0, 0, 0},
    //     {0, 0, 0, 0},
    //     {0, 0, 0, 0},
    //     {0, 0, 0, 0}};

    // Case - 3 | ans = 4

    int arr[][4] = {
        {1, 1, 1, 1},
        {1, 1, 1, 1},
        {1, 1, 1, 1},
        {1, 1, 1, 1}};

    int n = 4, m = 4;

    for (int i = 0; i < n; i++)
    {
        cout << endl;
        for (int j = 0; j < m; j++)
        {
            cout << arr[i][j] << "\t";
        }
    }

    cout << endl;
    cout << endl;

    int ans = mangoTreesOptimized(arr, n, m);

    cout << endl
         << endl
         << "ans: "
         << ans << endl;

    return 0;
}