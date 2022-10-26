#include <iostream>
#include <cmath>

std::string is_prime(long long val)
{
    std::string ret= "True";

    if (val == 1)
    {
        ret = "False";
    }

    for (long long i = 2; i <= sqrt(val); i++)
    {
        if (val % i == 0)
        {
            ret = "False";
        }
    }

    return ret;
}