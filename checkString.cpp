#include <iostream>
using namespace std;

bool areAllCharactersSame(string s)
{
    if (s.empty())
    {
        return true;
    }

    char firstChar = s[0];
    for (int i = 1; i < s.length(); i++)
    {
        if (s[i] != firstChar)
        {
            return false;
        }

    }
    return true;
}
