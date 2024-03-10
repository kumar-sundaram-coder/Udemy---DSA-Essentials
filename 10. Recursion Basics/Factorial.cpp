#include <iostream>
using namespace std;

int factorialOfNumber(int n)
{
    // Base case
    if (n == 0)
        return 1;

    // Recursive case

    return n * factorialOfNumber(n - 1);
}
int main()
{
    int n;
    cin >> n;
    cout << "Factorial of the Number " << n << " is: " << factorialOfNumber(n);
    return 0;
}