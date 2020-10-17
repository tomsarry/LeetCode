#include <vector>
#include <iostream>
#include <ostream>
#include <algorithm>
#include <limits>

using namespace std;

// TC : O(n)
// SC : O(1)
// beats 60% of users

// first approach : turn vector to int : add 1 => overflow on big inputs
// second approach : try to modify the vector in place instead

vector<int> plusOne(vector<int> &digits)
{
    int i = digits.size() - 1;
    while (i >= 0 && digits[i] == 9) // O(n)
    {
        digits.at(i) = 0; // O(1)
        i--;
    }

    if (i < 0)
    {
        digits.insert(digits.begin(), 1); // O(n)
        return digits;
    }

    // stopped the loop : either all 9 or one is < 9
    if (digits[i] != 9)
    {
        digits.at(i) = digits[i] + 1;
    }
    return digits;
}

int main()
{
    vector<int> v;
    v.push_back(9);
    v.push_back(9);
    v.push_back(0);
    v.push_back(9);

    plusOne(v);

    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i];
    }
    cout << endl;
}