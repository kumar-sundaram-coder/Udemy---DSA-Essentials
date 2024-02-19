#include <bits/stdc++.h>
using namespace std;

int defkin(int W, int H, vector<pair<int, int>> position)
{
    int maxX = INT_MIN; // to keep the maxX width(length) of the largest retangle
    int maxY = INT_MIN; // to keep the maxY length of tha largest rectangle

    vector<int> x_cordinates; // to store all the x_cordinates of the tower
    vector<int> y_cordinates; // to store all the y_cordinates of the tower

    // to store the left and bottom boundary coordinates i.e., 0 cz the actual cordinates given starts from number 1 and not 0, thus taking the value 0 as the starting boundary point for both x and y cordinates
    x_cordinates.push_back(0);
    y_cordinates.push_back(0);

    // add all the tower cordinates to x and y cordinate vector respectively
    for (int i = 0; i < position.size(); i++)
    {
        pair<int, int> val = position[i];
        x_cordinates.push_back(val.first);
        y_cordinates.push_back(val.second);
    }

    // Sort both x and y cordinates in increasing order, so that the resulting array would have all the points in order so that we can calculate the exact distance b/w those two points
    sort(x_cordinates.begin(), x_cordinates.end());
    sort(y_cordinates.begin(), y_cordinates.end());

    for (int i = 1; i < x_cordinates.size(); i++)
    {
        // calculating the max gap between any 2 x cordinate points of the vector, excluding the right/end boundary of the board/kingdom
        maxX = max(maxX, x_cordinates[i] - x_cordinates[i - 1] - 1);
    }

    for (int j = 1; j < y_cordinates.size(); j++)
    {
        // calculating the max gap between any 2 y cordinate points of the vector, excluding the top boundary of the board/kingdom
        maxY = max(maxY, y_cordinates[j] - y_cordinates[j - 1] - 1);
    }

    // now we would have the max gap/length between any 2 x & y cordinates/points but we don't have the length from the rightmost x cordinate to the right boudary and same with y, i.e., we don't have gap/length from topmost y cordinate to the top boundary, thus we will calculate this seperately and compare it with the prev maxX and maxY and the max among this will be our final maxX and maxY
    maxX = max(maxX, W - x_cordinates[x_cordinates.size() - 1]);
    maxY = max(maxY, H - y_cordinates[y_cordinates.size() - 1]);

    return (maxX * maxY); // length of the largest area is equal to length * breadth = maxX * maxY, thus this will be our final answer
}

// P.S.:
// In summary, the '-1' is included inside the loop because you're calculating the distance between points, while it's not included outside the loop because you're measuring the distance from the last point to the boundary.