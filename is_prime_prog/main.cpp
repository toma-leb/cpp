#include "is_prime.hpp"
#include <sstream>
#include <cstring>

int main()
{
    std::string input;
    std::string val;
    std::string::size_type sz;

    std::getline(std::cin,input);
    std::stringstream sstream(input);
    
    while (std::getline(sstream, val, ' '))
    {
        std::cout<<val<<" is a prime: "<<is_prime(stoll(val))<<std::endl;
    }
    
    return 0;
}