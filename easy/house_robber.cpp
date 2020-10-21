#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;
// DP problem
int rob(vector<int> &nums)
{
    if (nums.size() == 0)
    {
        return 0;
    }
    else if (nums.size() == 1)
    {
        return nums[0];
    }
    vector<int> sol(nums.size(), 0);
    //build vector of sol containing each optimal rob
    sol.at(0) = nums[0];
    sol.at(1) = max(nums[0], nums[1]);

    for (int i = 2; i < nums.size(); i++)
    {
        sol.at(i) = max(sol.at(i - 1), sol.at(i - 2) + nums[i]);
    }
    return sol.at(nums.size() - 1);
}

int main()
{
    vector<int> v{1, 2, 3, 1};
    cout << rob(v) << endl;
}