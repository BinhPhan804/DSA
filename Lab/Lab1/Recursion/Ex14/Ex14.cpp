#include <iostream>

using namespace std;

string reverseSentence(string s) 
{
    size_t index = s.find(' ');
    string str = {};
    if (index != string::npos)
    {
        s.erase(0, index + 1);
        str = str + reverseSentence(s);
        return str;
    }
    else
    {
        return s;
    }
}

int main()
{
    cout << reverseSentence("data structure and algorithm is scary");
    // string s = "Phan Thanh Binh";
    // s.erase(0, s.find(' ') + 1);
    // cout << s;
    return 0;
}