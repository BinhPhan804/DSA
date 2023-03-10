#include <iostream>
#include <vector>

using namespace std;

bool consecutiveOnes(vector<int>& nums) 
{
    int index = 0;
    if (nums.empty())
    {
        return true;
    }
    else
    {
        while (nums[index] != 1)
        {
            index++;
        }
        for (int i = index + 1; i < nums.size(); i++)
        {
            if (nums[i] == 1)
            {
                if (i - index > 1)
                {
                    return false;
                }
                else
                {
                    index = i;
                }
            }
        }
    }
    return true;
}

int main()
{
    vector<int> nums {0, 1, 1, 1, 9, 8};
    cout << consecutiveOnes(nums);
    return 0;
}