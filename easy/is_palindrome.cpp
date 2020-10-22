#include <iostream>

using namespace std;

bool isPalindrome(string s)
{
    int start = 0, end = s.length() - 1;

    while (start < end)
    {
        // get first real char
        while (start < end && !isalnum(s[start]))
        {
            start++;
        }
        while (start < end && !isalnum(s[end]))
        {
            end--;
        }
        if (start >= end)
        {
            return true;
        }
        if (tolower(s[start]) != tolower(s[end]))
        {
            return false;
        }
        start++;
        end--;
    }
    return true;
}

int main()
{
    string s = "0P0!";
    cout << isPalindrome(s) << endl;
}