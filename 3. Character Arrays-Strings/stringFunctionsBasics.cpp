#include <iostream>
#include <cstring>
using namespace std;

int main()
{
    char a[1000] = "abcdef";
    char b[1000];

    cout << a << endl;

    // strcpy -> sring copy
    strcpy(b, a);
    cout << b << endl;

    // strcmp -> stringcompare
    cout << strcmp(a, b) << endl;

    // strcat -> concatinate string
    strcat(b, "ghijkl");
    cout << b << endl;

    // strcmp -> stringcompare a with b
    cout << strcmp(a, b) << endl;
    
    // strcmp -> stringcompare b with a
    cout << strcmp(b, a) << endl;


    return 0;
}