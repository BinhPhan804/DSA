#include <iostream>
#include <stack>
#include <vector>

using namespace std;

vector<int> nextGreater(vector<int>& arr)
{
    vector<int> res;
    for (unsigned int i = 0; i < arr.size() - 1; i++)
    {
        for (unsigned int j = i + 1; j < arr.size(); j++)
        {
            if (arr[i] < arr[j])
            {
                res.push_back(arr[j]);
                break;
            }
        }
        if (res.size() == i)
        {
            res.push_back(-1);
        }
    }
    res.push_back(-1);

    return res;
}

int main()
{
    int N;
    cin >> N;
    vector<int> nums(N);
    for(int i = 0; i < N; i++) cin >> nums[i];
    vector<int> greaterNums = nextGreater(nums);
    for(int i : greaterNums) 
        cout << i << ' ';
    cout << '\n';  
    return 0;
}