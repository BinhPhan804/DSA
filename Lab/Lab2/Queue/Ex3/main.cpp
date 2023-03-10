#include <iostream>
#include <vector>
#include <queue>

using namespace std;

int numberOfTheWinner(int N, int k) 
{
    queue<int> queue;

    for (int i = 1; i <= N; i++)
    {
        queue.push(i);
    }

    while (queue.size() > 1)
    {
        for (int i = 0; i < k - 1; i++)
        {
            queue.push(queue.front());
            queue.pop();
        }
        queue.pop();
    }
    
    return queue.front();
}

int main()
{
    int N;
    int k;
    cin >> N >> k;
    cout << numberOfTheWinner(N, k);

    return 0;
}