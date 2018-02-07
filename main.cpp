#include <fstream>
#include <string>
#include <regex>
#include <iostream>

int main(int argc, char* argv[])
{
    std::ifstream input(argv[1]);
    std::ofstream output(argv[2]);

    std::regex pattern("(\\w+)(\\.|_)?(\\w*)@(\\w+)(\\.(\\w+))+");

    std::string line;
    std::smatch outcome;
    while (std::getline(input, line)){
            if(regex_search(line, outcome, pattern)){
                    std::cout << "sukces" << std::endl;
               output << outcome[0] << std::endl;
               }
           }
    output.close();
    input.close();
    return 0;
}
