#include <vector>
#include <iostream>

using namespace std;

// O(m) 98.86

int firstUniqChar(string s)
{

    vector<int> cnt(26, 0);
    for (int i = 0; i < s.length(); i++)
    {
        cnt[s[i] - 'a']++;
    }

    for (int j = 0; j < s.length(); j++)
    {
        if (cnt[s[j] - 'a'] == 1)
        {
            return j;
        }
    }
    return -1;
}

int main()
{
    string s = "loveleetcode";
    cout << firstUniqChar(s) << endl;
}