#include <iostream>
#include <stack>
#include <string>
#include <utility>

using namespace std;

string deleteDuplicate(string s, int k) 
{
    string str;
    stack<pair<char, int>> stack;
    if (k == 1)
    {
        return "";
    }
    for (int i = 0; i < s.length(); i++)
    {
        if (stack.empty() || s[i] != stack.top().first)
        {
            stack.push({s[i], 1});
        }
        else
        {
            stack.top().second++;
            if (stack.top().second == k)
            {
                stack.pop();
            }
        }
    }

    while (!stack.empty()) {
        pair<char, int> p = stack.top(); stack.pop();
        str = string(p.second, p.first) + str;
    }

    return str;
}

int main()
{   	
    string s = "";
    int k = 2;
    cout << deleteDuplicate(s, k);

    return 0;
}