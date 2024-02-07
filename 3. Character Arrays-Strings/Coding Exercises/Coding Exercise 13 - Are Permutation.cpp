#include <bits/stdc++.h>
using namespace std;

bool arePermutation(string A, string B)
{
    if (A.length() != B.length())
    {
        return false;
    }
 
    map<char, int> freqMap;

    // insert the count/freq of all characters in a map
    for (char a : A)
    {
        freqMap[a]++;
    }

    // or we can traverse the string like this
    // for(int i=0;i<A.size();i++){
    //              freqMap[A[i]]++;
    // }

    // if the same character is present in the B string, then dec the freq of that character in the freqMap, and if we found any character in string B, which has a 0 freq in the map or is not present in the map, then we can clearly say, these strings are NOT permutations, otherwise, they are if we traverse the full string B 
    for (char b : B)
    {
        if (freqMap.count(b) > 0)
        {
            freqMap[b]--;
        }
        else
        {
            return false;
        }
    }

    for (auto val : freqMap)
    {
        cout << val.first << val.second << endl;
    }

    return true;
}