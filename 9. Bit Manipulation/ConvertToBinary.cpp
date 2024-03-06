#include <iostream>
using namespace std;

int convertToBinary(int number)
{
    int ans = 0;
    int pow = 1;
    while (number != 0)
    {
        ans = ans + (number & 1) * pow;
        pow = pow * 10;
        number = number >> 1;
    }
    return ans;
}

int main()
{
    int number = 9;

    cout << "Binary Value of: " << number << " is equal to:" << convertToBinary(number);

    return 0;
}