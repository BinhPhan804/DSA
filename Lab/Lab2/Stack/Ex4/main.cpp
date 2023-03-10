#include <iostream>
#include <stack>
#include <vector>
#include <string>

using namespace std;

string parenthesesReversal(string s) 
{
    stack<char> stack;
    unsigned int index = 0;
    string str = {};

    if (s.empty())
    {
        return s;
    }
    else
    {
        
    }
    
    return str;
}

int main()
{
    string s = "vi(ik)kq";
    cout << parenthesesReversal(s);
    return 0;
}

