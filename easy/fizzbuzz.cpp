#include <ostream>
#include <iostream>
#include <string>
#include <vector>

using namespace std;

vector<string> fizzBuzz(int n)
{
    vector<string> res;
    for (int i = 1; i <= n; i++)
    {
        if (i % 15 == 0)
        {
            res.push_back("FizzBuzz");
        }
        else if (i % 5 == 0)
        {
            res.push_back("Buzz");
        }
        else if (i % 3 == 0)
        {
            res.push_back("Fizz");
        }
        else
        {
            res.push_back(to_string(i));
        }
    }
    return res;
}

int main()
{
    vector<string> v = fizzBuzz(15);
    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i] << endl;
    }
}