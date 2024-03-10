#include <iostream>
using namespace std;

string spellings[] = {"zero", "one", "two", "three", "four", "five", "six", "seven", "eight", "nine"};

void printSpelling(int n)
{
    // Base Case
    if (n == 0)
        return;

    // Recursive Case
    int lastDigit = n % 10;
    printSpelling(n / 10);
    cout << spellings[lastDigit] << "\t";
}

void printSpelling_2(int n, bool isStart = true)
{
    // Base Case
    if (n == 0 && isStart)
    {
        cout << spellings[0] << "\t";
        return;
    }

    // Recursive Case
    if (n > 0)
    {
        int lastDigit = n % 10;
        printSpelling_2(n / 10, false);
        cout << spellings[lastDigit] << "\t";
    }
}

int main()
{
    printSpelling(21021);
    cout << endl;
    printSpelling(1000);
    cout << endl;
    printSpelling(0); // not work for 0 as base case will return without printing
    cout << endl;
    printSpelling_2(0); // work for 0 as base case will return and print
    cout << endl;
    printSpelling(1000);
    cout << endl;
    printSpelling(21021);

    return 0;
}