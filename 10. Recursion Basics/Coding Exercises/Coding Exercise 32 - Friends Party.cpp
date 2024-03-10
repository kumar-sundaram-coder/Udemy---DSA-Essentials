#include <bits/stdc++.h>
using namespace std;

int friendsPairing(int n)
{

    // Base case
    if (n <= 2)
    {
        return n;
    }

    // Recursive case

    return friendsPairing(n - 1) + (n - 1) * friendsPairing(n - 2);
}