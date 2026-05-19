#ifndef CONTACT_HPP
# define CONTACT_HPP

#include <string>

class Contact 
{
private:
    std::string _firstName;
    std::string _surName;
    std::string _username;
    std::string _contactNumber;
    std::string _privateNote;

public:
    Contact();
    ~Contact();

    void set_FirstName(std::string str);
    void set_SurName(std::string str);
    void set_UserName(std::string str);
    void set_ContactNumber(std::string str);
    void set_PrivateNote(std::string str);

    std::string get_FirstName() const;
    std::string get_SurName() const;
    std::string get_UserName() const;
    std::string get_ContactNumber() const;
    std::string get_PrivateNote() const;
};


#endif