#include <iostream>
#include <fstream>
#include <string>
#include <chrono>
#include <thread>
int main(int argc, char **argv)
{
    std::string s;
    std::size_t found;
    std::string *ptr;

    if (argc != 4)
    {
        std::cout << "Error: Bad arguments number." << std::endl;
        return 1;
    }
    std::string s1 = argv[2];
    std::string s2 = argv[3];
    std::string infile_name = argv[1];
    std::string outfile_name = infile_name + ".replace";
    std::ifstream infile;
    std::ofstream outfile;
    infile.open(infile_name);
    if (infile.fail())
        return std::cout << "Error in " << infile_name << std::endl, 1;
    outfile.open(outfile_name);
    if (outfile.fail())
        return std::cout << "Error attempting to create " << outfile_name << std::endl, 1;
    while (!infile.eof())
    {
        getline(infile, s);
        std::cout << s << std::endl;
        found = s.find(s1);
        ptr = &s;
        while (found != std::string::npos)
        {
            std::cout << found  << " " << *ptr << std::endl;
            (*ptr).replace(found, s1.size(), s2);
            ptr += found + s2.size();
            found = (*ptr).find(s1);
             std::this_thread::sleep_until(std::chrono::system_clock::now() + std::chrono::seconds(1));
        }
        outfile << s << std::endl;
        std::cout << s << std::endl;
    }
    infile.close();
    outfile.close();
    return 0;
}