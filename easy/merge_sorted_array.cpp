#include <iostream>
#include <vector>

// TC: O(n+m)
// SC: O(n+m)

using namespace std;

void merge(vector<int> &nums1, int m, vector<int> &nums2, int n)
{
    int ptr1 = 0, ptr2 = 0;
    vector<int> res;

    while (ptr1 < m && ptr2 < n)
    {
        if (nums1[ptr1] < nums2[ptr2])
        {
            res.push_back(nums1[ptr1]);
            ptr1++;
        }
        else
        {
            res.push_back(nums2[ptr2]);
            ptr2++;
        }
    }

    while (ptr1 < m)
    {
        res.push_back(nums1[ptr1]);
        ptr1++;
    }

    while (ptr2 < n)
    {
        res.push_back(nums2[ptr2]);
        ptr2++;
    }
    nums1 = res;
}

int main()
{
    vector<int> v1{1, 2, 3, 0, 0, 0};
    vector<int> v2{2, 5, 6};

    merge(v1, 3, v2, 3);

    for (int i = 0; i < v1.size(); i++)
    {
        cout << v1[i] << " : ";
    }
    cout << endl;
}