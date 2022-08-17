#include "hashing.hpp"
#include <string>
using namespace std;

int hash_string(string s)
{
    int result = 0;
    for (int i = 0; i < s.length(); i++)
    {
        result += s[i];
    }
    return result % 13;
    // implement hashing function here
}