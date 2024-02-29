#include <iostream>
using namespace std;

void checkPowerOfTwoOrNot(int n)
{
    if ((n & (n - 1)) == 0)
    {
        cout << n << " is a Power of 2 !!";
    }
    else
    {
        cout << n << " is not a Power of 2 !!!";
    }
}

int main()
{

    int n;
    cout << "Enter the value of Number:\t";
    cin >> n;

    checkPowerOfTwoOrNot(n);

    return 0;
}

// Leetcode - 231

class Solution
{
public:
    bool isPowerOfTwo(int n)
    {
        if (n <= 0)
            return false;

        return ((n & (n - 1)) == 0) ? true : false;
    }
};
