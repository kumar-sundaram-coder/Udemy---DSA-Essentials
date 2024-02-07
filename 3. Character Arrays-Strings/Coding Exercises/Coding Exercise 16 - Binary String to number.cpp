#include <iostream>
#include <string>
#include <cmath>
using namespace std;

int binaryToDecimal(string s)
{

    // your code goes here
    int n = s.length() - 1;
    int ans = 0;
    int currCharValue = 0; // this will store the value of the character in int form, say the character was '1', then it will be storing 1 in it's value
    int p = 0;             // this will be the power of 2, we will keep on increasing this value from 0 .... (n-1) basically we are trying to achieve this: 2^0, 2^1, 2^2,..... 2^n-1

    for (int i = n; i >= 0; i--) // we are running the loop from back, basically ones, tens, hundered,...
    {
        currCharValue = (s[i] - '0') * pow(2, p); // to convert s[i] (a character) into int, we would subtract it by the value of '0'.... basically we are substracting the ASCII value of that character with the ASCII value of character '0', the difference b/w their ASCII values gives us the numeric value of the character!!!

        p++; // for incresing the pow for next iteration

        ans += currCharValue; // adding the value to the final ans
    }

    return ans;
}
