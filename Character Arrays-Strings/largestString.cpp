#include <iostream>
#include <cstring>
#include <climits>

using namespace std;

int main()
{
    char sentence[1000];
    int n = 0;
    cin >> n;

    cin.get(); // to skip the end line character that enters in the input buffer after inputing the value of n

    char largestString[1000];
    int largestLengthOfString = 0;

    while (n--)
    {
        cin.getline(sentence, 1000);
        if (strlen(sentence) > largestLengthOfString)
        {
            strcpy(largestString, sentence);
            largestLengthOfString = strlen(sentence);
        }
    }

    cout << "Largest String among the strings is ::: " << largestString << endl;
    cout << "Length of this String is: " << largestLengthOfString << endl;

    return 0;
}
