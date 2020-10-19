#include <vector>
#include <iostream>
#include <algorithm>

using namespace std;

void moveZeroes(vector<int> &nums)
{
    int idx = 0;
    if (nums.size() == 0)
    {
        return;
    }

    for (int i = 0; i < nums.size() - 1; i++)
    {
        if (nums[i] != 0)
        {
            continue;
        }

        idx = i;

        while (idx < nums.size() - 1 && nums[idx] == 0)
        {
            idx++;
        }
        // swap the zero with the first non zero element
        if (nums[idx] != 0)
        {
            nums.at(i) = nums[idx];
            nums.at(idx) = 0;
        }
    }
}

int main()
{
    vector<int> v{0, 1, 4, 4, 0, 0, 6, 0, 9};
    moveZeroes(v);

    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i] << " ; ";
    }
    cout << endl;
}