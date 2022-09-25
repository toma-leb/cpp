#include "find_motive.hpp"

int main(int argc, char* argv[])
{
    int ret_val = 0;
    int occurance = 0; 

    occurance = find_motive(argv[1], argv[2]);

    if (occurance != -1)
    {
        ret_val = 1;

        if (occurance > 0)
        {
            ret_val = 2;
        }
        
        std::cout<<"The file "<< argv[1] <<" contains "<< occurance <<" words containing the motive "<< argv[2] <<std::endl;
    }

    return ret_val;
}