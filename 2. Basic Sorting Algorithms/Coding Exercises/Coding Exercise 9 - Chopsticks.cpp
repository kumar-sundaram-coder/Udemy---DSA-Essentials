#include <bits/stdc++.h>
using namespace std;

int pairSticks(vector<int> v, int D)
{
    // your code goes here
    sort(v.begin(), v.end());
    int n = v.size();

    int sum = 0;
    for (int i = 0; i < n - 1; i++)
    {

        if (v[i + 1] - v[i] <= D)
        {
            sum++; // increase the count
            i++;   // increase the value of i by one, as this stick is already used and thus can be used again, also in the loop, i++ will happen again, cz in making a pair baiscally both i and i+1 sticks were used thus, we will baiscally move to the stick that is i+2, and in case the pair doesn't make a pair, then also, the loop i++ will work cz if that stick can't make a pair with it's adjacant stick i.e., i+1, then it will not be of any use after that as the minimum diff will be always b/w the i and i+1 sticks, as they are in incr order
        }
    }
    return sum;
}