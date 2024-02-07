#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main()
{
    /* methods to initialize the string
    string str = "abcd";

    string str2;
    cin >> str2;

    string str3("hello world");

    cout<<str<<endl;
    cout<<str2<<endl;
    cout<<str3<<endl;
    */

    //    string str;
    //    getline(cin,str);   //-> to take input of a string with white spaces and to take the complete line in one go

    //    cout<<str<<endl;

    string str;
    int n = 5;
    vector<string> vec;
    string temp;

    while (n--)
    {
        getline(cin, temp);
        vec.push_back(temp);
    }
    cout<<endl;

    for (string strr : vec)
    {
        cout << strr << endl;
    }

    return 0;
}
