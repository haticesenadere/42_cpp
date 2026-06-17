
#include "Contact.hpp"
#include <iostream>
#include <iomanip>

void Contact::set_FirstName(std::string str)
{
    _firstName = str;
}

void Contact::set_LastName(std::string str)
{
    _lastName = str;
}

void Contact::set_NickName(std::string str)
{
    _nickName = str;
}

void Contact::set_PhoneNumber(std::string str)
{
    _phoneNumber = str;
}

void Contact::set_DarkestSecret(std::string str)
{
    _darkestSecret = str;
}

std::string Contact::get_FirstName() const
{
    return _firstName;
}

std::string Contact::get_LastName() const
{
    return _lastName;
}

std::string Contact::get_NickName() const
{
    return _nickName;
}
std::string Contact::get_PhoneNumber() const
{
    return _phoneNumber;
}
std::string Contact::get_DarkestSecret() const
{
    return _darkestSecret;
}

void Contact::displayFullContact(void) const
{
    std::cout << std::endl;
    std::cout << "========== CONTACT DETAILS ==========" << std::endl;

    std::cout << std::left
              << std::setw(16) << "First Name"
              << ": " << _firstName << std::endl;

    std::cout << std::left
              << std::setw(16) << "Last Name"
              << ": " << _lastName << std::endl;

    std::cout << std::left
              << std::setw(16) << "Nickname"
              << ": " << _nickName << std::endl;

    std::cout << std::left
              << std::setw(16) << "Phone Number"
              << ": " << _phoneNumber << std::endl;

    std::cout << std::left
              << std::setw(16) << "Darkest Secret"
              << ": " << _darkestSecret << std::endl;

    std::cout << "=====================================" << std::endl;
    std::cout << std::right;
}
