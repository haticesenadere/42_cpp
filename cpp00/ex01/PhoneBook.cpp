
#include "PhoneBook.hpp"
#include <iostream>
#include <iomanip>

PhoneBook::PhoneBook()
{
    _count = 0;
    _nextPersonWhereAdded = 0;
}

PhoneBook::~PhoneBook()
{
}

std::string PhoneBook::emptyInfoFilled(std::string prompt) const
{
    std::string line;

    while (true)
    {
        std::cout << prompt;
        if (!std::getline(std::cin, line))
            return "";
        if (!line.empty())
            return line;
        std::cout << "Field cannot be empty. Please try again." << std::endl;
    }
}

std::string PhoneBook::cutColumn(std::string text) const
{
    if (text.length() > 10)
        return (text.substr(0, 9) + ".");

    return (text);
}

void PhoneBook::AddContact()
{
    Contact newContact;

    std::string first_name = emptyInfoFilled("Please enter First Name:\n");
    if (first_name.empty())
        return;
    std::string last_name = emptyInfoFilled("Please enter Last Name:\n");
    if (last_name.empty())
        return;
    std::string nick_name = emptyInfoFilled("Please enter Nick Name:\n");
    if (nick_name.empty())
        return;
    std::string phonen_number = emptyInfoFilled("Please enter Phone Number:\n");
    if (phonen_number.empty())
        return;
    std::string darkest_seceret = emptyInfoFilled("Please enter Info:\n");
    if (darkest_seceret.empty())
        return;

    newContact.set_FirstName(first_name);
    newContact.set_LastName(last_name);
    newContact.set_NickName(nick_name);
    newContact.set_PhoneNumber(phonen_number);
    newContact.set_DarkestSecret(darkest_seceret);

    _contacts[_nextPersonWhereAdded] = newContact;
    if (_count < 8)
        _count++;

    _nextPersonWhereAdded = (_nextPersonWhereAdded + 1) % 8;

    std::cout << "New Contact Added successfully!" << std::endl;
}

void PhoneBook::SearchContact() const
{
    std::string input;

    if (_count == 0)
    {
        std::cout << "PhoneBook is empty." << std::endl;
        return;
    }

    std::cout << std::right
              << std::setw(10) << "Index" << "|"
              << std::setw(10) << "First Name" << "|"
              << std::setw(10) << "Last Name" << "|"
              << std::setw(10) << "Nickname"
              << std::endl;

    for (int index = 0; index < _count; ++index)
    {
        int contactIndex = (_count < 8) ? index : (_nextPersonWhereAdded + index) % 8;
        const Contact &contact = _contacts[contactIndex];

        std::cout << std::right
                  << std::setw(10) << index + 1 << "|"
                  << std::setw(10)
                  << cutColumn(contact.get_FirstName()) << "|"
                  << std::setw(10)
                  << cutColumn(contact.get_LastName()) << "|"
                  << std::setw(10)
                  << cutColumn(contact.get_NickName())
                  << std::endl;
    }

    std::cout << "Enter the index of the contact: ";

    if (!std::getline(std::cin, input))
        return;

    if (input.length() != 1
        || input[0] < '1'
        || input[0] > '0' + _count)
    {
        std::cout << "Invalid contact index." << std::endl;
        return;
    }

    int displayIndex = input[0] - '1';
    int contactIndex = (_count < 8) ? displayIndex : (_nextPersonWhereAdded + displayIndex) % 8;

    _contacts[contactIndex].displayFullContact();
}