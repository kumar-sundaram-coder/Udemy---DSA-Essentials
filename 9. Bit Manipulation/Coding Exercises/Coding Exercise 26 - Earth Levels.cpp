#include <bits/stdc++.h>
using namespace std;

// the basic trick is to count the number of set bits in the integer K, this will give us the minimum jumps required in the power of 2, to reach the desired Nth (Kth) level according to the question...
int earthLevel(int k)
{
    return __builtin_popcount(k);
}

/*
Sample Input
7

Sample Output
3

Explanation
0 -> 4 -> 6 -> 7

*/