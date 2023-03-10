#include <iostream>

using namespace std;

bool containsPattern(char* text, char* pattern)
{
    if (*text == '\0')
    {
        return false;
    }
    else if (*pattern == '\0')
    {
        return true;
    }
    else if (*text == *pattern)
    {
        return containsPattern(text + 1, pattern + 1);
    }
    else 
    {
        return containsPattern(text + 1, pattern);
    }
}

int main()
{
    cout << containsPattern((char *)"Dai hoc Bach Khoa",(char *)"Bach Khoa");
    return 0;
}