#include <iostream>
using namespace std;

// Finding a^b in a faster way rather than doing a*a*a*a*..<b-times>..*a
int fastExponential(int a, int b)
{
    int ans = 1;
    while (b != 0)
    {
        int lastBit = (b & 1); // it will be either 1 or 0
        if (lastBit == 1)
        {
            ans = ans * a;
        }
        a = a * a;
        b = b >> 1;
    }
    return ans;
}

int main()
{
    int a = 5, b = 4;

    cout << a << " raised to the power of " << b << " is: " << fastExponential(a, b);

    return 0;
}