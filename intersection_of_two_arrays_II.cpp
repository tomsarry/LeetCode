#include <vector>
#include <ostream>
#include <iostream>
#include <algorithm>

// TC : O(n^2) -> Accepted (14.71 %)
// SC : O(n)

using namespace std;

vector<int> intersect(vector<int> &nums1, vector<int> &nums2)
{
    vector<int> res;
    if (nums1.size() < 1 || nums2.size() < 1)
    {
        return res;
    }

    for (int i = 0; i < nums1.size(); i++)
    {
        for (int j = 0; j < nums2.size(); j++)
        {
            if (nums1[i] == nums2[j])
            {
                res.push_back(nums1[i]);
                nums2.erase(nums2.begin() + j);
                break;
            }
        }
    }
    return res;
}

int main()
{
    vector<int> v1, v2, res;
    v1.push_back(4);
    v1.push_back(9);
    v1.push_back(5);

    v2.push_back(9);
    v2.push_back(4);
    v2.push_back(9);
    v2.push_back(8);
    v2.push_back(4);

    res = intersect(v1, v2);

    for (int i = 0; i < res.size(); i++)
    {
        cout << res[i] << " ";
    }
    cout << endl;
}