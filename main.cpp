#include <iostream>
#include <string>
#include "hashing.hpp"

using namespace std;

int main(int argc, char *argv[])
{
    int m = 89;
    cout << hash_string(argv[1], m) << endl;
}