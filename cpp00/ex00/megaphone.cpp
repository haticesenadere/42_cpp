
#include <iostream>
#include <cstdlib>

    using std::cout;
    using std::endl;

    std::string string_to_upper(std::string arg)
    {
        for (size_t i = 0; i < arg.length(); i++)
            arg[i] = toupper(arg[i]);
        return arg;
            
    }
    int main(int argc, char **argv)
    {
        if (argc == 1)
        {
            std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
            return EXIT_SUCCESS;  
        }
        for (int i = 1; i < argc; i++)
            cout << string_to_upper(argv[i]);
        cout << endl;
        return EXIT_SUCCESS;

    }   