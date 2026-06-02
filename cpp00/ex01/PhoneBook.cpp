
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
        return text.substr(0, 9) + ".";
    return text;
}

void PhoneBook::AddContact()
{
    Contact newContact;

    std::string first_name = emptyInfoFilled("Please enter First Name:\n");
    std::string last_name = emptyInfoFilled("Please enter Last Name:\n");
    std::string nick_name = emptyInfoFilled("Please enter Nick Name:\n");
    std::string phonen_number = emptyInfoFilled("Please enter Phone Number:\n");
    std::string darkest_seceret = emptyInfoFilled("Please enter Info:\n");

    newContact.set_FirstName(first_name);
    newContact.set_LastName(last_name);
    newContact.set_NickName(nick_name);
    newContact.set_PhoneNumber(phonen_number);
    newContact.set_DarkestSecret(darkest_seceret);

    _contacts[_nextPersonWhereAdded] = newContact;

    if (_count < 8)
    {
        _count++;
    }

    _nextPersonWhereAdded = (_nextPersonWhereAdded + 1) % 8;

    std::cout << "New Contact Added." << std::endl;
}

void PhoneBook::SearchContact() const
{
    Contact contact;

    if (_count == 0)
    {
        std::cout << "No Users." << std::endl;
        return;
    }
    std::cout << std::setw(10) << "index" << "|";
    std::cout << std::setw(10) << "first name" << "|";
    std::cout << std::setw(10) << "last name" << "|";
    std::cout << std::setw(10) << "nickname" <<  "|" << std::endl;
    for (int index = 0; index < _count; index++)
    {
        contact = _contacts[index];
        std::cout << std::setw(10) << index + 1 << "|";
        std::cout << std::setw(10) << cutColumn(contact.get_FirstName()) << "|";
        std::cout << std::setw(10) << cutColumn(contact.get_LastName()) << "|";
        std::cout << std::setw(10) << cutColumn(contact.get_NickName()) << "|" << std::endl;
    }

    std::string input;

    std::cout << "Enter the index of the contact to view details: ";
    if (!std::getline(std::cin, input))
        return;

    if (input.length() != 1 || input[0] < '1' || input[0] > '0' + _count)
    {
        std::cout << "Invalid index." << std::endl;
        return;
    }

    int contactIndex = (input[0] - '0') - 1;
    _contacts[contactIndex].displayFullContact();
}
