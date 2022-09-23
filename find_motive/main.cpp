#include "find_motive.hpp"

int main(int argc, char* argv[])
{
    std::string motive;
    std::string path;

    int ret_val = 0;
    int occurance = 0;

    if (argc < 3) 
    {
        ret_val = 1;
    } 
    else
    {
        path = argv[1];
        motive = argv[2];
    }

    if (ret_val == 0) 
    {
        occurance = find_motive(path, motive);
        if (occurance != 0)
        {
            std::cout<<"The file "<< path <<" contains "<< occurance <<" words containing the motive "<< motive <<std::endl;
        }
    }

    return ret_val;
}