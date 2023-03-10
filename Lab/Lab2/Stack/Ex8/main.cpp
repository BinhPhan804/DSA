#include <iostream>
#include <stack>

using namespace std;

bool isValidParentheses (string s)
{
    stack<char> stack;
    for (int i = 0; i < s.length(); i++)
    {
        if (stack.size() == 0)
        {
            stack.push(s[i]);
        }
        else
        {
            if (stack.top() == '{')
            {
                if (s[i] == '}')
                {
                    stack.pop();
                }
                else
                {
                    stack.push(s[i]);
                }
            }
            else if (stack.top() == '[')
            {
                if (s[i] == ']')
                {
                    stack.pop();
                }
                else
                {
                    stack.push(s[i]);
                }
            }
            else if (stack.top() == '(')
            {
                if (s[i] == ')')
                {
                    stack.pop();
                }
                else
                {
                    stack.push(s[i]);
                }
            }
            else
            {
                stack.push(s[i]);
            }
        }
    }

    if (stack.size() == 0)
    {
        return true;
    }
    else
    {
        return false;
    }
}

int main()
{
    cout << isValidParentheses("[]");
    cout << isValidParentheses("[)");
    return 0;
}