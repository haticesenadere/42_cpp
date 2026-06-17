#include <iostream>
#include <string>
#include "PhoneBook.hpp"

int main()
{
    PhoneBook newPhoneBook;
    std::string input;

    std::cout << "Welcome to the PhoneBook application!" << std::endl;
    std::cout << "Available commands: ADD, SEARCH, EXIT" << std::endl;

    while (1)
    {
        std::cout << "> ";
        if (!std::getline(std::cin, input))
            break;
        if (input == "ADD")
            newPhoneBook.AddContact();
        else if (input == "SEARCH")
            newPhoneBook.SearchContact();
        else if (input == "EXIT")
        {
            std::cout << "Exiting..." << std::endl;
            break;
        }
        else
            std::cout << "Invalid command. Please try again." << std::endl;
    }
}