#ifndef _CONTACT_H_
#define _CONTACT_H_

#include <string>
using std::string;

class Contact {
    string firstName;
    string lastName;
    string nickName;
    string phoneNumber;
    string darkestSecret;

public:
    string  getFirstName();
    void    setFirstName(string firstName);
    string  getLastName();
    void    setLastName(string lastName);
    string  getNickName();
    void    setNickName(string nickName);
    string  getPhoneNumber();
    void    setPhoneNumber(string phoneNumber);
};

#endif