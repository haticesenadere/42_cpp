#ifndef PHONEBOOK_HPP
#define PHONEBOOK_HPP

#include "Contact.hpp"
#include <string>

class PhoneBook
{
    private:
        Contact _contacts[8];
        int _count;
        int _nextPersonWhereAdded;

        std::string emptyInfoFilled(std::string prompt) const;
        std::string cutColumn(std::string text) const;

    public:
        PhoneBook();
        ~PhoneBook();

        void AddContact();
        void SearchContact() const;
};

#endif