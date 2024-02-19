// method - 1 | Using stl sort and comparator
/*
#include <bits/stdc++.h>
using namespace std;

vector<int> sortingWithComparator(vector<int> a, bool flag)
{
    // your code  goes here
    if (flag)
    {
        sort(a.begin(), a.end(), less<int>());
    }
    else
    {
        sort(a.begin(), a.end(), greater<int>());
    }
    return a;
}
*/
// method - 2 | Using stl sort and reverse in case we want desc order

#include <bits/stdc++.h>
using namespace std;

vector<int> sortingWithComparator(vector<int> a, bool flag)
{
    // your code  goes here
    sort(a.begin(), a.end(), less<int>());
    if (!flag)
    {
        reverse(a.begin(), a.end());
    }
    return a;
}