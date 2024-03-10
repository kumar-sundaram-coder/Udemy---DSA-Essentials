#include <iostream>
using namespace std;

int power(int a, int n)
{
    // Base Case
    if (n == 0)
        return 1;

    // Recursive Case
    return a * power(a, n - 1);
}

int fastPower(int a, int n)
{
    // Base Case
    if (n == 0)
        return 1;

    // Recursive Case
    int subProb = fastPower(a, n / 2);
    int subProdSquare = subProb * subProb;

    if (n & 1)
    {
        return a * subProdSquare;
    }
    return subProdSquare;
}

int main()
{

    cout << power(2, 5) << endl;
    // cout<<fastPower(2,5)<<endl;

    return 0;
}