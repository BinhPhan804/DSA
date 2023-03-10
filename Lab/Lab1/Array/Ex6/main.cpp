#include <iostream>
#include <vector>
#include <climits>

using namespace std;

void sort(vector<int>& nums)
{
    for (int i = 0; i < nums.size(); i++)
    {
        for (int j = 0; j < nums.size() - 1; j++)
        {
            if (nums[j] > nums[j + 1])
            {
                swap(nums[j], nums[j + 1]);
            }
        }
    }
}

int minimumAmplitude(vector<int>& nums, int k) 
{
    int res1, res2;
    int index = 0;
    int size = nums.size();
    sort(nums);
    for (int i = 0; i < k; i++)
    {
        res1 = nums[size-3] - nums[0];
        res2 = nums[size - 1] - nums[2];

        if (res1 > res2)
        {
           // cout << "Success1" << endl;
            nums.erase(nums.begin());
        }
        else
        {
          //  cout << "Success2" << endl;
            nums.erase(nums.end() - 1);
        }
        // cout << "Success3" << endl;
        size = nums.size();
    }

    // for (int i : nums)
    // {
    //     cout << i << " ";
    // }
    // cout << endl;
    return nums[size - 1] - nums[0];
}

int main()
{
    vector<int> nums {1, 7, 8, 11, 13, 99, 102, 105};
    // nums.erase(nums.begin());
    cout << minimumAmplitude(nums, 2);
    //vector<int> num2 {1,2,4,7,8,9};
    // nums.erase(nums.begin());
    //cout <<endl<< minimumAmplitude(num2, 2);
    return 0;
}