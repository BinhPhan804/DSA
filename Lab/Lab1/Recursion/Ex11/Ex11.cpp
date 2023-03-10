#include <iostream>
#include <string.h>

using namespace std;

bool isPalindrome(string str) 
{ 
    if (str.length() <= 1)
    {
        return true;
    }
    else
    {
        if (str.begin() != str.end())
        {
            return false;
        }
        else
        {
            str.erase(str.begin());
            str.erase(str.end());
            isPalindrome(str);
        }
    }
    return true;
}

int main()
{
    cout << isPalindrome("mom");
    cout << isPalindrome("do geese see god");
    string s = "Phan";
    // s.erase(s.begin());
    s.erase(s.end());
    cout << s;
    return 0;
}