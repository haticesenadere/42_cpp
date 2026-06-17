
#ifndef CONTACT_HPP
# define CONTACT_HPP

#include <string>

class Contact
{

    private:
        std::string _firstName;
        std::string _lastName;
		std::string _nickName;
        std::string _phoneNumber;
        std::string _darkestSecret;
    
    public:

        void set_FirstName(std::string str);
        void set_LastName(std::string str);
        void set_NickName(std::string str);
        void set_PhoneNumber(std::string str);
        void set_DarkestSecret(std::string str);
    
        std::string get_FirstName() const;
        std::string get_LastName() const;
        std::string get_NickName() const;
        std::string get_PhoneNumber() const;
        std::string get_DarkestSecret() const;

        void displayFullContact(void) const;
};

#endif