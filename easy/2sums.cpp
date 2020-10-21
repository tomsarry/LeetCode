#include <vector>
#include <algorithm>
#include <iostream>
#include <unordered_map>
using namespace std;

// TC: O(n) - 94.43
// SC: O(n)

vector<int> twoSum(vector<int> &nums, int target)
{
    unordered_map<int, int> m;
    vector<int> res;

    for (int i = 0; i < nums.size(); i++)
    {
        // is good value in hashtable ?
        auto it = m.find(target - nums[i]);

        // if found correct value : return
        if (it != m.end())
        {
            res.push_back(i);
            res.push_back(it->second);
            return res;
        }

        // not found -> add to hashtable
        m[nums[i]] = i;
    }
}

int main()
{
    vector<int> v{3, 3};
    vector<int> sol;
    sol = twoSum(v, 6);
    cout << sol[0] << " ; " << sol[1] << endl;
}