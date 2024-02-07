#include <bits/stdc++.h>
using namespace std;

string removeDuplicate(string s)
{
    // your code goes here

    set<char> orderedSet; // used a set, as it store the values in a sorted way also, it removes duplicates as a set allows only unique value aka no duplicates
    //  For storing the elements in desc order -->  set<char,greater<char>> orderedSet;

    for (char c : s)
    {
        orderedSet.insert(c); // fill the set with the characters of the given string
    }

    s = ""; // we are using the same string, thus, we are setting this as empty string

    for (auto ele : orderedSet)
    {
        s += ele; // just iterate the set and keep on adding elements, it will be free from duplicates and in a sorted order!
    }
    return s;
}