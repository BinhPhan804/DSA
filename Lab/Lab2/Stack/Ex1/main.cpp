#include <iostream>
#include <string>
#include <stack>

using namespace std;

int baseballScore(string ops)
{
    int res1, res2;
    int sum = 0;
    stack<int> stack;
    // cout << stack.size() << "----------------------" << endl;
    for (int i = 0; i < ops.length(); i++)
    {
        if (ops[i] <= '9' && ops[i] >= '0')
        {
            stack.push((int) ops[i] - '0');
            cout << stack.top() << endl;
        }
        else if (ops[i] == 'C')
        {
            stack.pop();
        }
        else if (ops[i] == 'D')
        {
            stack.push(stack.top() * 2);
        }
        else
        {
            res1 = stack.top();
            stack.pop();
            res2 = stack.top();
            stack.push(res1);
            stack.push(res1 + res2);
        }
    }
    res1 = stack.size();
    for (int i = 0; i < res1; i++)
    {
        // cout << stack.top() << " ";
        sum += stack.top();
        stack.pop();
    }

    return sum;
}

int main()
{
    cout << baseballScore("524CD9++");
    return 0;   
}