#include <string>
#include <iostream>

#include "PhoneBook.hpp"
int main()
{
     PhoneBook newPhoneBook;
        std::string input;

    while (1)
    {
      
        std::cout << "Welcome to the Phone Book. Please select an operation:" << std::endl;
       
        if(!std::getline(std::cin, input))
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