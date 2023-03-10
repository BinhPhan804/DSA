#include <iostream>

using namespace std;

int factorial(int n)
{
    if (n == 0 || n == 1)
    {
        return 1;
    }
    else if (n < 0)
    {
        return -1;
    }
    int value = factorial(n - 1);
    return n*value;
}

int reverseFactorial(int n) 
{
    
}

int main()
{
    cout << factorial(0) << endl;
    // cout << reverseFactorial(120);
    return 0;
}