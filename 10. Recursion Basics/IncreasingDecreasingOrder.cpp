#include <iostream>
using namespace std;

void printDecreasing(int n)
{
    // Base case
    if (n == 0)
    {
        cout << n << endl;
        return;
    }

    // Recursive case;
    cout << n << endl;
    printDecreasing(n - 1);
}

void printIncreasing(int n)
{
    // Base case
    if (n == 0)
    {
        cout << n << endl;
        return;
    }

    // Recursive case
    printIncreasing(n - 1);
    cout << n << endl;
}

int main()
{

    // printDecreasing(10);
    printIncreasing(10);

    return 0;
}