// My intuitive approach | brute force
// Time Complexity O(N) + Space Complexity O(N)
/*
#include <bits/stdc++.h>
using namespace std;

vector<int> kRotate(vector<int> arr, int k)
{
    // your code  goes here
    vector<int> ans;

    int n = arr.size();
    k = k % n; // This is effective rotation as rotating an array N number of times gives back the same array thus, we'll take only the effective rotation count that we have to rotate the array, say k=3 and n=5, then effective rotation = k%n = 3%5 = 3. also in case k=13 and n=5 then the effective rotation is = k%n = 13%5 = 3, thus we need to rotate only 3 times and we'll get the desired output.

    for (int i = (n - k); i < n; i++)
    {
        ans.push_back(arr[i]);
    }
    for (int j = 0; j < (n - k); j++)
    {
        ans.push_back(arr[j]);
    }
    return ans;
}
*/

// video approach | optimized soln as we don't need any extra space
// Time Complexity O(N)
#include <bits/stdc++.h>
using namespace std;

vector<int> kRotate(vector<int> arr, int k)
{
    // your code  goes here
    vector<int> ans;

    int n = arr.size();
    k = k % n; // This is effective rotation as rotating an array N number of times gives back the same array thus, we'll take only the effective rotation count that we have to rotate the array, say k=3 and n=5, then effective rotation = k%n = 3%5 = 3. also in case k=13 and n=5 then the effective rotation is = k%n = 13%5 = 3, thus we need to rotate only 3 times and we'll get the desired output.

    // reverse the first subarray keep in mind that end is not included in reverse, so doing arr.begin()+n-k for n=5 and k=2, will give the value as 3 but the reverse method will not include the 3rd idx and will only reverse before 3 i.e., 2.
    reverse(arr.begin(), arr.begin() + n - k);

    // reverse the other subarray
    reverse(arr.begin() + n - k, arr.end());

    // reverse the complete array
    reverse(arr.begin(), arr.end());

    return arr;
}