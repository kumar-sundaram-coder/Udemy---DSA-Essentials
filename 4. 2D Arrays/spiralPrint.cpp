#include <iostream>
using namespace std;

void printInSpiralWay(int arr[][4], int n, int m)
{
    int startRow = 0;
    int endRow = n - 1;
    int startColumn = 0;
    int endColumn = m - 1;

    while (startRow <= endRow && startColumn <= endColumn)
    {

        // Case - 1 | Start Row
        for (int col = startColumn; col <= endColumn; col++)
        {
            cout << arr[startRow][col] << "\t";
        }

        // Case - 2 | End Column
        for (int row = startRow + 1; row <= endRow; row++)
        {
            cout << arr[row][endColumn] << "\t";
        }

        // Case - 3 | End Row
        for (int col = endColumn - 1; col >= startColumn; col--)
        {
            if (startRow == endRow)
            {
                break; // Avoid duplicate printing of the elements
            }
            cout << arr[endRow][col] << "\t";
        }

        // Case - 4 | Start Col
        for (int row = endRow - 1; row >= startRow + 1; row--)
        {
            if (startColumn == endColumn)
            {
                break; // Avoid duplicate printing of the elements
            }
            cout << arr[row][startColumn] << "\t";
        }

        // Update the values
        startRow++;
        endRow--;
        startColumn++;
        endColumn--;
    }
}

int main()
{
    // int arr[][4] = {
    //     {1, 2, 3, 4},
    //     {12, 13, 14, 5},
    //     {11, 16, 15, 6}};

    // int n = 3, m = 4;

    int arr[][4] = {
        {1, 2, 3, 4},
        {12, 13, 14, 5},
        {11, 16, 15, 6},
        {10, 9, 8, 7}};

    int n = 4, m = 4;

    printInSpiralWay(arr, n, m);

    return 0;
}