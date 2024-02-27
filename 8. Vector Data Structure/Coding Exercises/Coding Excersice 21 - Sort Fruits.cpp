#include <bits/stdc++.h>
using namespace std;

bool comparePrice(pair<string, int> a, pair<string, int> b)
{
    return a.second < b.second;
}

bool compareName(pair<string, int> a, pair<string, int> b)
{
    return a.first < b.first;
}

vector<pair<string, int>> sortFruits(vector<pair<string, int>> v, string S)
{
    // your code  goes here

    sort(v.begin(), v.end(), S == "price" ? comparePrice : compareName);
    return v;
}