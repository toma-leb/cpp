#include <iostream>
#include <fstream>

int find_motive(std::string path, std::string motive) 
{

    std::ifstream File(path);
    std::string ln;
    int occurance = 0;
    int suff[motive.length()];

    if (File.is_open()) 
    {
        while (getline(File,ln)) 
        {
            if (ln.find(motive) != std::string::npos) {
                occurance += 1;

            }
        }
    }

    std::cout << occurance << '\n';

    return 0;
}
