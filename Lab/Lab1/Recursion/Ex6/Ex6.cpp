#include <iostream>
#include <string.h>

using namespace std;

int myArrayToInt(char *str, int n) 
{ 
    if (n == 0)
    {
        return 0;
    }
    int value = (int) str[n - 1] - '0';
    int res = myArrayToInt(str, n - 1);
    return res*10 + value;
}

int main()
{
    char str[] = "2020";
    cout << myArrayToInt(str, 4);
    return 0;
}