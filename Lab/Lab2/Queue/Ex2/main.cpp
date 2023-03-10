#include <iostream>
#include <vector>
#include <queue>

using namespace std;

long long nthNiceNumber(int n) 
{
    // 2 5 22 25 52 55 222 225 252 255....
    queue<long long> q;
    long count = 2;

    q.push(2);
    q.push(5);
    
    while (count < n)
    {
        long long num = q.front();
        q.pop();

        q.push(num * 10 + 2);
        count++;
        {
            if (count == n)
            {
                break;
            }
        }
        q.push(num * 10 + 5);
        count++;
    }

    return q.back();
}

int main()
{
    int n;
    cin >> n;
    cout << nthNiceNumber(n) << endl;
}