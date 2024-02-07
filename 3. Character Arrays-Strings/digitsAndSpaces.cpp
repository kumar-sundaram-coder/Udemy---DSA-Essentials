#include <iostream>
using namespace std;

// count the number of alphabets, digits/numbers and spaces in a given string/character array
int main()
{
    int numOfAplha = 0;
    int numOfDigits = 0;
    int numOfSpace = 0;

    char a[100];

    char tmp = cin.get();

    while (tmp != '\n')
    {
        if (tmp >= '0' && tmp <= '9')
        {
            numOfDigits++;
        }
        else if (tmp == ' ' or tmp == '\t')
        {
            numOfSpace++;
        }
        else if (tmp >= 'a' && tmp <= 'z' || (tmp >= 'A' && tmp <= 'Z'))
        {
            numOfAplha++;
        }
        tmp = cin.get();
    }

    cout << "Number of Digits are:\t" << numOfDigits << endl;
    cout << "Number of Spaces are:\t" << numOfSpace << endl;
    cout << "Number of Alpha are:\t" << numOfAplha << endl;

    return 0;
}