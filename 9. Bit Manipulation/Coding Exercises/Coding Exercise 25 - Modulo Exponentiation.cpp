#include <iostream>
using namespace std;

int power(int x, int y, int mod)
{
    int ans = 1;
    int base = x;
    while (y)
    {
        int last_bit = y & 1;
        if (last_bit)
        {
            ans = ans * base;
        }
        base = (base * base) % mod;
        y = y >> 1;
    }

    return ans % mod;
}