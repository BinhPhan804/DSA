#include <iostream>

using namespace std;

int findMax(int* arr, int length)
{
    if (length == 1)
        return arr[0];
    return max(findMax(arr, length - 1), arr[length - 1]);
}

int main()
{
    int arr[11] = {1, 3, 5, 6, 11, 111, 2, 111, 0};
    cout << findMax(arr, 10);
    return 0;
}