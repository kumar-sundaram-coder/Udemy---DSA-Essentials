#include <iostream>
#include <algorithm>
#include <climits>

using namespace std;

// maximize the minimum 1's, if the matrix is divided into 4 parts by a vetical and horizontal lines at i,j thus dividing the matrix into 4 parts.... our aim is to find the maximum 1's(mango trees) that can be found in the smallest part of these 4 parts...

// Brute force solution, here we are moving the i and j from 0 to n and m respectively anddd then we are calculating the sum of 1's in all the four parts i.e., S1, S2, S3 and S4 thus the complexity are as follows:
// Time Complexity O(N^2 * N^2) => O(N^4)
// Space Complexity O(1) -> No extra space used
int mangoTrees(int arr[][4], int n, int m)
{
    int ans = 0;
    for (int i = 0; i < n - 1; i++)
    {
        int minOnes = INT_MAX;

        for (int j = 0; j < m - 1; j++)
        {
            int S1 = 0, S2 = 0, S3 = 0, S4 = 0;

            /*
            S1      |   S2
                    |
        ---------------------
                    |
            S3      |   S4

      */

            // S1
            for (int row = 0; row <= i; row++)
            {
                for (int col = 0; col <= j; col++)
                {
                    if (arr[row][col] == 1)
                        S1++;
                }
            }

            // S2

            for (int row = 0; row <= i; row++)
            {
                for (int col = j + 1; col < m; col++)
                {
                    if (arr[row][col] == 1)
                    {
                        S2++;
                    }
                }
            }

            // S3
            for (int row = i + 1; row < n; row++)
            {
                for (int col = 0; col <= j; col++)
                {
                    if (arr[row][col] == 1)
                    {
                        S3++;
                    }
                }
            }

            // S4
            for (int row = i + 1; row < n; row++)
            {
                for (int col = j + 1; col < m; col++)
                {
                    if (arr[row][col] == 1)
                    {
                        S4++;
                    }
                }
            }

            // By now we have calculated the sum of 1's in each section/part of the matrix that the 2 lines(horizontal and vertical) have made, now we will calculate the minimum of these 4 Section
            minOnes = min({S1, S2, S3, S4});

            // Now we will update our answer, i.e., maximum of these minimum
            ans = max(ans, minOnes);
        }
    }

    return ans;
}

int main()
{
    // Case - 1 | ans = 2
    int arr[][4] = {
        {0, 0, 0, 1},
        {1, 0, 0, 0},
        {0, 1, 1, 0},
        {1, 1, 1, 1}};

    // Case - 2 | ans = 0

    // int arr[][4] = {
    //     {0, 0, 0, 0},
    //     {0, 0, 0, 0},
    //     {0, 0, 0, 0},
    //     {0, 0, 0, 0}};

    // Case - 3 | ans = 4

    // int arr[][4] = {
    //     {1, 1, 1, 1},
    //     {1, 1, 1, 1},
    //     {1, 1, 1, 1},
    //     {1, 1, 1, 1}};

    int n = 4, m = 4;

    int ans = mangoTrees(arr, n, m);

    cout << endl
         << "ans: "
         << ans << endl;

    return 0;
}