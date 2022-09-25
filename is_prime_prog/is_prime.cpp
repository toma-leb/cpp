#include <iostream>
#include <cmath>

std::string is_prime(int val)
{
    std::string ret= "true";

    if (val == 1)
    {
        ret = "false";
    }

    for (int i = 2; i <= sqrt(val); i++)
    {
        if (val % i == 0)
        {
            ret = "false";
        }
    }

    return ret;
}