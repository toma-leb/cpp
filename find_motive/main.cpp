#include "find_motive.hpp"

int main(int argc, char* argv[])
{
    std::string motive;
    std::string path;

    int ret_val = 0;

    if (argc < 3) 
    {
        ret_val = 1;
    } 
    else
    {
        path = argv[1];
        for (int i = 2; i < argc; i++) {
            motive += argv[i];
            if (i+1 < argc)
            {
                motive += " ";
            }
        }
    }

    if (ret_val == 0) 
    {
        find_motive(path, motive);
    }

    return ret_val;
}