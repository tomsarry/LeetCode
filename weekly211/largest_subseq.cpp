#include <iostream>
#include <vector>
#include <algorithm>
#include <string>

using namespace std;

int maxLengthBetweenEqualCharacters(string s)
{
    int max = -1, size = s.size();
    if (size < 2)
    {
        return max;
    }

    for (int i = 0; i < size; i++)
    {
        for (int j = size - 1; j > i; j--)
        {
            if ((s[i] == s[j]) && (j - i - 1 > max))
            {
                max = j - i - 1;
            }
        }
    }
    return max;
}

int main()
{
    string s = "aa";                     // 0
    string s2 = "";                      // -1
    string s3 = "aba";                   // 1
    string s4 = "abcdefaa";              // 6
    string s5 = "abcdefghijklmhnopqrst"; // 5;

    // cout << (s[0] == s[1]) << endl;

    cout << maxLengthBetweenEqualCharacters(s) << endl;
    cout << maxLengthBetweenEqualCharacters(s2) << endl;
    cout << maxLengthBetweenEqualCharacters(s3) << endl;
    cout << maxLengthBetweenEqualCharacters(s4) << endl;
    cout << maxLengthBetweenEqualCharacters(s5) << endl;
}