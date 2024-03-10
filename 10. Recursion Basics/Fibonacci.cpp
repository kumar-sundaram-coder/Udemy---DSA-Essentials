#include <iostream>
using namespace std;

int fibonacciNumber(int n)
{
    // Base case
    if (n == 0 || n == 1)
        return n;

    // Recursive case

    return fibonacciNumber(n - 1) + fibonacciNumber(n - 2);
}

int main()
{

    int n;
    cin >> n;

    cout << "Fibonacci series till " << n << " is:: " << fibonacciNumber(n);

    return 0;
}