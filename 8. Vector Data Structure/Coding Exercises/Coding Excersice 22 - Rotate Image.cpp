#include <bits/stdc++.h>
using namespace std;

// Method - 1 | by using a new matrix (not inplace approach)
void rotate(vector<vector<int>> &matrix)
{
    // your code goes here

    int n = matrix.size(), m = matrix[0].size();
    vector<vector<int>> newMatrix(n, vector<int>(m, 0));

    int row = n - 1, col = 0;
    for (int i = 0; i < n; i++)
    {
        row = n - 1;
        for (int j = 0; j < m; j++)
        {
            newMatrix[i][j] = matrix[row][col];
            row--;
        }
        col++;
    }

    for (auto row : matrix)
    {
        for (auto ele : row)
        {
            cout << ele << "\t";
        }
        cout << endl;
    }

    cout << endl;
    cout << endl;
    cout << endl;
    cout << endl;

    for (auto row : newMatrix)
    {
        for (auto ele : row)
        {
            cout << ele << "\t";
        }
        cout << endl;
    }
    matrix = newMatrix;
}

// Method - 2 | by using the same matrix (inplace approach)

#include <bits/stdc++.h>
using namespace std;

void rotate(vector<vector<int>> &matrix)
{
    // your code goes here
    //   We would first transpose the matrix i.e., make all the rows as columns and vice-versa
    // then we will reverse the transposed matrix and will get the desired answer

    int n = matrix.size();

    // Step -1 | transpose the matrix
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            swap(matrix[i][j], matrix[j][i]);
        }
    }

    // Step -2 | reverse all the individual rows of the transposed matrix
    for (int i = 0; i < n; i++)
    {
        reverse(matrix[i].begin(), matrix[i].end());
    }
}
