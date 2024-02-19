#include <iostream>

using namespace std;

int main()
{
    char numbers[][10] = {
        "one",
        "two",
        "three",
        "four"};

    for (int i = 0; i < 4; i++)
    {
        cout << numbers[i] << "\t";
    }

    return 0;
}