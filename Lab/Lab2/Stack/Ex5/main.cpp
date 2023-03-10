#include <iostream>
#include <stack>

using namespace std;

string removeDuplicates(string S)
{
    stack<char> stack;
    int index = 0;
    string str = {};
    // string res = "*";
    for (unsigned int i = 0; i < S.length(); i++)
    {
        if (stack.size() == 0)
        {
            stack.push(S[i]);
        }
        else
        {
            if (stack.top() == S[i])
            {
                stack.pop();
            }
            else
            {
                stack.push(S[i]);
            }
        }
    }
    
    for (unsigned int i = 0; i < stack.size(); i++)
    {
        str += "*";
    }
    
    index = stack.size();
    
    while (stack.size() > 0)
    {
        str[index - 1] = stack.top();
        stack.pop();
        index--;
    }
    
    return str;
}

int main()
{
    cout << removeDuplicates("abbaca");

    return 0;
}