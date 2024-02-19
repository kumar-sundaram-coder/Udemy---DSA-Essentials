#include <iostream>
#include <cstring>

using namespace std;

int main()
{
    // Method - 1 | Take input via cin
    /*
    // char a[] = {'A', 'B', 'C', 'D', 'E'}; // wrong -> if initialized like this, then it should end with a null character '\0'

    // char a[] = {'A', 'B', 'C', 'D', 'E', '\0'}; // currect way, to end it with '\0'null character

    char a[] = "abcdef"; // no need to end this with '\0'null, cz when we define a string like this, no need to add null character at the end

    cout << a << endl;

    char b[100];
    cout << "Enter the value of character array:";
    cin >> b;

    cout << "Entered string is:" << b << endl;

    cout << strlen(a) << endl; // strlen(a) this will give the number of visible characters(excluding null)
    cout << sizeof(a) << endl; // this will give the total size/length including the null character, thus will be always +1 of the length of strlen(a)
*/

    // Method - 2 | Take input via cin.get()
    // cin.get() -> it can read blanks too! and cin can't !
    /*
        char a[100];
        char temp = cin.get();
        int len = 0;
        while (temp != '\n')
        {
            a[len] = temp;
            len++;
            temp = cin.get();
        }
        a[len] = '\0';

        cout << "Entered string is: \t" << a << endl
             << "Length is: " << strlen(a) << endl;

        return 0;
        */

    // Method - 3 | Take input via cin.getline()
    // cin.get() -> it can an entire line in one go!

    char a[1000];
    /*
        cin.getline(a, 1000);
        cout << "Entered string is:" << a << endl;
    */
    // also we can tell when to stop reading, like at '\n' or at a white space ' ' or at any other character
    /*

        cin.getline(a,1000,'\n');
        cout << "Entered string is \t :" << a << endl;

        cin.getline(a, 1000, ' ');
        cout << "Entered string is \t :" << a << endl;
        cin.getline(a,1000,'#');
        cout << "Enter string is \t :" << a << endl;
        */
}