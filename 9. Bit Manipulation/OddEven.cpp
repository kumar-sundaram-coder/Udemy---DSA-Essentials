#include <iostream>
using namespace std;

void basicOddEvenWay(int number)
{
    // basic way using modulous operator with 2 -> gives 0 with even number and 1 with odd number
    if (number % 2 == 0)
    {
        cout << number << " is Even!!";
    }
    else
    {
        cout << number << " is Odd!!!";
    }
}

void bitwiseWayToCheckOddEven(int number)
{
    // doing bitwise & of any number with 1, will basically mean that we are doing AND of 1 and the last bit of that number, so as we know all even number has last bit as 0 and odd number has last bit as 1, therefore we can use this logic to check the odd or even nature of any number

    /*
    number = 5 & 1->        000101
                        &   000001
                        =>  000001  --> 1  ==> i.e., ODD


    number = 6 & 1->        000110
                        &   000001
                        =>  000000  --> 0 ==> i.e., EVEN

    */

    if (number & 1 == 0)
    {
        cout << number << " is Even!!";
    }
    else
    {
        cout << number << " is Odd!!!";
    }
}

int main()
{

    int number;
    cout << "Enter the value of number:\t";
    cin >> number;

    // basicOddEvenWay(number);
    bitwiseWayToCheckOddEven(number);

    return 0;
}