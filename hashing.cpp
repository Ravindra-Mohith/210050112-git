#include "hashing.hpp"
#include <string>
using namespace std;

int pow(int a, int b)
{
    int k = 1;
    for (int i = 0; i < b; i++)
    {
        k *= a;
    }
    return k;
}

int hash_string(string s)
{
    int result = 0;
    for (int i = 0; i < s.length(); i++)
    {
        result += (s[i] * pow(89, i)) % 13;
    }
    return result % 13;
}