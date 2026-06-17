#include <iostream>
#include <string>
#include <cctype>

int main(int ac, char **av)
{
    if (ac < 2)
    {
        std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
        return 0;
    }

    for (int i = 1; i < ac; i++)
    {
        std::string arg(av[i]);
        for (size_t j = 0; j < arg.length(); j++)
        {
            arg[j] = std::toupper(arg[j]);
        }
        std::cout << arg;
    }
    std::cout << std::endl;
    return 0;
}