#include <iostream>
#include <vector>

using namespace std;

int equalSumIndex(vector<int>& nums) 
{
    long long int sum1 = 0;
    long long int sum2 = 0;
    int i1 = 0;
    int i2 = nums.size() - 1;
    if (nums.empty())
    {
        return -1;
    }
    else
    {
        sum1 = nums[i1];
        sum2 = nums[i2];
        while (i1 < i2)
        {
            if (sum1 < sum2)
            {
                i1++;
                sum1 += nums[i1];
            }
            else if (sum1 > sum2)
            {
                i2--;
                sum2 += nums[i2];
            }
            else
            {
                i1++;
                i2--;
                sum1 += nums[i1];
                sum2 += nums[i2];
            }
        }
    }
    if (sum1 == sum2 && i1 == i2)
    {
        cout << sum1 << " " << sum2 << endl;
        return i1;
    }
    else
    {
        cout << i1 << " " << i2 << endl;
        cout << sum1 << " " << sum2 << endl;
        return -1;
    }
}

int main()
{
    vector<int> nums {1, 2, 3, 4, 5, 1};
cout << equalSumIndex(nums);
    return 0;
}