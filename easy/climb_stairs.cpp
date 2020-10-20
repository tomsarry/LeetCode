#include <iostream>
#include <vector>

using namespace std;

// Fibonacci in DP
// TC : O(n)
// SC : O(n)

int climbStairs(int n)
{
    vector<int> res;

    // base cases
    res.push_back(0);
    res.push_back(1);
    res.push_back(2);

    if (n < 3)
    {
        return n;
    }

    for (int i = 3; i <= n; i++)
    {
        res.push_back(res[i - 1] + res[i - 2]);
    }
    return res[n];
}

int main()
{
    cout << climbStairs(1) << endl;
    cout << climbStairs(2) << endl;
    cout << climbStairs(3) << endl;
    cout << climbStairs(10) << endl;
}