#include <iostream>
using namespace std;

int getIthBit(int number, int i)
{
    int mask = (1 << i);
    return (number & mask) > 0 ? 1 : 0;
    /*
    5 ->    000101
        &   000100 --> mask(1<<2) for i=2
            000100 --> this > 0  ->> if this is >0 then the bit is 1 else 0
    */
}

void setIthBit(int &number, int i)
{
    int mask = (1 << i);
    number = (number | mask);
    /*
    5 ->    000101
        |   000010 --> mask(1<<1) for i=1
            000111 --> this is the final ans after setting the ith bit
    */
}

void clearIthBit(int &number, int i)
{
    int mask = ~(1 << i);
    number = (number & mask);
    /*
    for number = 13 and i =2
    mask ->  ~(1<<2) -> ~(000100) -> (111011)

    13 ->   001101
        &   111011 --> mask ~(1<<2) for i=2
            001001 --> this is the final ans after clearing the ith bit

    */
}

void updateIthBit(int &number, int i, int v)
{
    clearIthBit(number, i);
    int mask = (v << i);      // if v=0, then the mask will be 000000 and if v=1 then the mask will be 000100 for i=3
    number = (number | mask); // sets the right value at that bit
    /*
    for number = 13 and i =1 and v=1

    number -> 13 -> 001101
    clear the ith bit--> i=1 --> 001101  -> new value of number

    mask ->  (1<<1) -> (000010)

    new value of number after clearing ith bit ->     001101
                                                    | 000010 --> mask (1<<2) for i=2 and v=1
                            this is the final ans --> 001111  -->15

    */
}

void clearLastIBits(int &number, int i)
{
    int mask = (-1 << i);
    // int mask = ((~0) << i);
    number = (number & mask);

    /*
                        -1--> 1111111 ==> ~0 -> NOT of Zero
    mask ->(-1<<i) for i=3 -> 1111000
    number -> 85 -> 1010101 (in binary)

    clear last 3 bits -> number & mask
                        1010101
                    &   1111000
                        1010000  -> final ans ->80
    */
}

void clearBitsInRange(int &number, int i, int j)
{
    int a = (-1 << (j + 1)); // int a= ((~0)<<j+1);
    int b = (1 << i) - 1;
    int mask = a | b;
    number = number & mask;
}

void replaceBits(int &n, int i, int j, int m)
{
    clearBitsInRange(n, i, j);
    int mask = (m << i);
    n = n | mask;
}

int main()
{
    int number = 5; // 5 -->  0000101
    int i;
    // cout << "Enter the value of i:\t";
    // cin >> i;

    // cout << getIthBit(number, i) << endl;
    // setIthBit(number, i);
    // cout <<"After setting the "<<i<<"th bit, the final number is: " << number;

    // number = 13;
    // clearIthBit(number, i);
    // cout << "After clearing the " << i << "th bit, the final number is: " << number;

    // number = 13;
    // updateIthBit(number, i, 1);
    // cout << "After updating the " << i << "th bit, the final number is: " << number;

    // number = 85;
    // clearLastIBits(number, i);
    // cout << "After clearing the last " << i << " bits, the final number is: " << number;

    // number = 31;
    // i = 1;
    // int j = 3;

    // clearBitsInRange(number, i, j);
    // cout << "After clearing the bits in the range: " << i << " <-> " << j << " , the final number is: " << number;

    int n = 15;
    i = 1;
    int j = 3;
    int m = 2;

    replaceBits(n, i, j, m);
    cout << "After replacing the bits, the final number is: " << n;

    return 0;
}