#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main()
{
    vector<int> nums;
    nums.push_back(1);
    nums.push_back(1);
    nums.push_back(5);
    int len = nums.size();
    vector<int> temp = nums;
    for (int i = 2; i >= len; i++)
    {
        swap(nums[len-i], nums[len-1]);
        if (nums > temp)
        {
            break;
        }
    }
    for (auto x : nums)
    {
        cout << x << " ";
    }
    return 0;
}