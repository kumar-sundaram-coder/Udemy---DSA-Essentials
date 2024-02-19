#include <iostream>

using namespace std;

void inputArray()
{
    int marks[100];
    int n;

    // Input
    cout << "Enter a number b/w 1-100 \n";
    cin >> n;

    // Input array
    for (int i = 0; i < n; i++)
    {
        cin >> marks[i];
    }

    // Output Array
    for (int j = 0; j < n; j++)
    {
        cout << marks[j] << " ,";
    }
    cout << endl;
}
int main()
{
    inputArray();

    return 0;
}
