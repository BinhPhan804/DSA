#include <iostream>

using namespace std;

void printHailstone(int number)
{
    if (number == 1)
    {
        cout << number;
        return;
    }
    cout << number << " ";
    if (number % 2 == 0)
    {
        printHailstone(number / 2);
    }
    else printHailstone(number * 3 + 1);
}

int main()
{
    printHailstone(15);
    return 0;
}