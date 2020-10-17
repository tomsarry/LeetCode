#include <vector>
#include <iostream>

using namespace std;

// nums is sorted
// SC : O(1)
// TC : O(n^2)
// Goal : remove duplicates in place

int removeDuplicates(vector<int> &nums)
{
    int previous = nums[0];
    if (nums.empty())
        return nums.size();
    for (int i = 1; i < nums.size(); i++) // O(n)
    {
        if (nums[i] == previous) // delete element
        {
            nums.erase(nums.begin() + i); // O(n)
            i--;
        }
        else // update previous
        {
            previous = nums[i];
        }
    }
    return nums.size();
}

int main()
{
    vector<int> v;
    v.push_back(0);
    v.push_back(0);
    v.push_back(1);
    v.push_back(1);
    v.push_back(2);
    cout << removeDuplicates(v) << endl;
}