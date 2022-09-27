#include <iostream>
#include <fstream>

int find_motive(std::string path, std::string motive) 
{

    std::ifstream File(path);
    std::string word;
    int occurance = -1;
 
    if (File.is_open()) 
    {
        occurance = 0;
        while (File >> word) 
        {
            if (word.find(motive) != std::string::npos) {
                occurance += 1;
            }
        }
    }

    return occurance;
}
