#include <vector>
#include <iostream>
#include <map>

using namespace std;

// accepts unicode O(n) - 37.89
bool isAnagram(string s, string t)
{
    if (s.length() != t.length())
    {
        return false;
    }

    map<char, int> m1;
    map<char, int> m2;

    for (int i = 0; i < s.length(); i++)
    {
        m1[s[i]]++;
        m2[t[i]]++;
    }

    for (int j = 0; j < s.length(); j++)
    {
        if (m1[s[j]] != m2[s[j]])
        {
            return false;
        }
    }
    return true;
}

// only accepts lowercase letters -> O(n) - 99.58

// bool isAnagram(string s, string t)
// {
//     if (s.length() != t.length())
//     {
//         return false;
//     }

//     // only lowercase alphabet -> can use a vector of size 26
//     vector<int> chars1(26);
//     vector<int> chars2(26);
//     for (int i = 0; i < s.length(); i++)
//     {
//         chars1[s[i] - 'a']++;
//         chars2[t[i] - 'a']++;
//     }

//     for (int j = 0; j < s.length(); j++)
//     {
//         if (chars1[s[j] - 'a'] != chars2[s[j] - 'a'])
//         {
//             return false;
//         }
//     }
//     return true;
// }

int main()
{
    string s1 = "ana!gram";
    string s2 = "nagaram!";

    cout << isAnagram(s1, s2) << endl;
}