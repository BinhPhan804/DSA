#include <iostream>

using namespace std;

int decimalToBinary(int decimal_number) 
{
    int b = decimal_number % 2;
    if (decimal_number / 2 == 0)
    {
        return decimal_number % 2;
    }
    else
    {
        return decimalToBinary(decimal_number / 2)*10 + b;
    }
} 

int main()
{
    int n;
    cin >> n;
    cout << decimalToBinary(n) << endl;
    return 0;
}