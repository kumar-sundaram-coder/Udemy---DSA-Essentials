#include <bits/stdc++.h>
using namespace std;

int largestElement(vector<int> arr)
{

    // Method - 1
    // int maxVal=INT_MIN;
    // for(int val:arr){
    //     maxVal=max(maxVal,val);
    // }
    // return maxVal;

    // Method - 2: using STL
    return *max_element(arr.begin(), arr.end());
}