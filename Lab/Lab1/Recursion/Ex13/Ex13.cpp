#include <iostream>

using namespace std;

void printPattern(int n) 
{ 
    if (n > 0)
    {
        cout << n << " ";
        printPattern(n - 5);
    }
    if (n <= 0) cout << n;
    else cout << " " << n;
}

int main()
{
    printPattern(14);
    return 0;
}