#include <bits/stdc++.h>
using namespace std;

int compress(vector<char> &chars)
{
    // your code goes here
    int n = chars.size();

    string str;
    int i = 0, j = 0; // keep 2 pointers

    while (i < n) // whenever i exceeds the array size, break the loop
    {
        char currChar = chars[i]; // store the valueof current character
        int currCharCount = 1;    // keep the count of the current character

        j = i + 1; // take j as the next character of i, to check if the next char is same as current char

        while (j < n) // j can't exceed n
        {
            if (chars[j] == currChar) // compare them
            {
                currCharCount++; // if same, increment the count of curr char
                j++;             // shift the pointer j to the next element to check the same
            }
            else
            {
                break; // if the jth element was not same as curr char then it means we can break the loop and search for the next character count and till this point only the prev char was present, in continuous
            }
        }

        i = j; // instead of i++ and stuff, directly shift i to j as j holds the position of next unique character whose occurance in continuation we have to find

        str += currChar; // append the curr char to the string
        if (currCharCount != 1)
        { // if the count of current char is not 1(greater than 1), then only append the char count to the string
            str += to_string(currCharCount);
        }
    }
    // at this point we have the compressed string i.e., "aabcccdddecc" -> "a2bc3d3ec2", and according to the question, we only have to return the length of the compressed string
    return str.length();
}

// video solution | similar to my code, just better coding style
// Time Complexity is O(N) as we are running for + while loop, but in total we are just covering the array 1 time only!
/*
int compress(vector<char> &chars)
{
    string str;
    int n = chars.size();
    for (int i = 0; i < n; i++)
    {
        int count = 1;
        while (i < n - 1 && chars[i + 1] == chars[i])
        {
            count++;
            i++;
        }
        str += chars[i];
        if (count > 1)
        {
            str += to_string(count);
        }
    }
    return str.length();
}
*/
