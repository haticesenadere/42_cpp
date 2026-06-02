
#include "Contact.hpp"
#include <iostream>

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

void Contact::displayFullContact() const
{
    std::cout << "First Name:" << get_FirstName() << std::endl;
    std::cout << "Last Name:" << get_LastName() << std::endl;
    std::cout << "Nick Name:" << get_NickName() << std::endl;
    std::cout << "Phone Number:" << get_PhoneNumber() << std::endl;
    std::cout << "Darkest Secret:" << get_DarkestSecret() << std::endl;
}
