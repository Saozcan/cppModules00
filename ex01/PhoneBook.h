#ifndef _PHONEBOOK_H_
#define _PHONEBOOK_H_

#include "Contact.h"
#include <iostream>
using std::cout;

class PhoneBook{
    int index;
    int size;
    Contact contacts[8];
    void wordCheck(string word);
    void printById(int index);
public:
    PhoneBook();
    void add (string firstName, string lastName, string nickName, string phoneNumber);
    void printAll();
    void printWithNumber(int index);
};

#endif