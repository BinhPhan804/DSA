#include <iostream>
#include <vector>
#include <queue>
#include <deque>

using namespace std;

int findMax(deque<int> de)
{
    int max = 0;

    max = de.front();
    de.pop_front();
    while (de.size() > 0)
    {
        if (de.front() > max)
        {
            max = de.front();
        }
        de.pop_front();
    }
    
    return max;
}

int sumOfMaxSubarray(vector<int>& nums, int k) 
{
    int sum = 0;
    int max = 0;
    deque<int> de;

    if (k == 1)
    {
        for (unsigned int i = 0; i < nums.size(); i++)
        {
            sum += nums[i];
        }
        return sum;
    }

    for (int i = 0; i < k; i++)
    {
        de.push_back(nums[i]);
    }
    
    max = findMax(de);
    sum += max;
    for (unsigned int i = k; i < nums.size(); i++)
    {
        if (max == de.front())
        {
            de.pop_front();
            de.push_back(nums[i]);
            max = findMax(de);
        }
        else
        {
            de.pop_front();
            de.push_back(nums[i]);
            if (nums[i] > max)
            {
                max = nums[i];
            }
        }
        sum += max;
    }

    return sum;
}

int main()
{
    vector<int> nums {1, 2, 4, 3, 6};
    int k = 3;
    cout << sumOfMaxSubarray(nums, k);

    return 0;
}