#include <iostream>

using namespace std;

int main()
{
    char route[1000];
    cin.getline(route, 1000);
    int x = 0, y = 0;

    for (int i = 0; route[i] != '\0'; i++)
    {
        switch (route[i])
        {
        case 'N':
        {
            y++;
            break;
        }
        case 'S':
        {
            y--;
            break;
        }
        case 'E':
        {
            x++;
            break;
        }
        case 'W':
        {
            x--;
            break;
        }
        }
    }


    
    if (y > 0)
    {
        while (y > 0)
        {
            cout << "N"
                 << "\t";
            y--;
        }
    }
    else
    {
        while (y < 0)
        {
            cout << "S"
                 << "\t";
            y++;
        }
    }

    if (x > 0)
    {
        while (x > 0)
        {
            cout << "E"
                 << "\t";
            x--;
        }
    }
    else
    {
        while (x < 0)
        {
            cout << "W"
                 << "\t";
            x++;
        }
    }

    return 0;
}