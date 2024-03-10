#include <iostream>
using namespace std;

int tillingProblem(int n, int m)
{
    // Base case
    if (n < m)
    {
        return 1;
    }

    // Recursive case
    return tillingProblem(n - 1, m) + tillingProblem(n - m, m);
}