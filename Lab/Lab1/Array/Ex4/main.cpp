#include <iostream>
#include <vector>
#include <string>

using namespace std;

int longestSublist(vector<string>& words) 
{
    int max = 0;
    int res = 1;
    int oldIndex = 0;
    char word;

    if (words.empty())
    {
        return 0;
    }

    for (int i = 0; i < words.size() - 1; i++)
    {
        word = words[i][0];
        oldIndex = i;
        for (int j = i + 1; j < words.size(); j++)
        {
            if ((word == words[j][0]) && (j - oldIndex == 1))
            {
                res++;
                oldIndex = j;
            }
        }

        if (res > max)
        {
            max = res;
        }

        res = 1;
    }
    return max;
}

int main()
{
    vector<string> words {"also", "and", "an", "currying", "and", "day", "and", "and", "constituent", "an"};
cout << longestSublist(words);

    return 0;
}