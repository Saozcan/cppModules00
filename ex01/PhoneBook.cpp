#include "PhoneBook.h"

PhoneBook::PhoneBook() {
    index = -1;
}

void PhoneBook::add(string firstName, string lastName, string nickName, string phoneNumber) {
    if (firstName.empty() || lastName.empty() || nickName.empty() || phoneNumber.empty()){
        std::cout << "Cannot enter a empty value.";
        return ;
    }
    index++;
    size = index % 8;
    contacts[size].setFirstName(firstName);
    contacts[size].setLastName(lastName);
    contacts[size].setNickName(nickName);
    contacts[size].setPhoneNumber(phoneNumber);
}

void PhoneBook::printById(int index) {
    int size = this->index;
    if (this->index >= 8)
        size = 7;
    if (index >= 0 && index <= size)
    {
        cout << index << "|";
        wordCheck(contacts[index].getFirstName());
        cout << "|";
        wordCheck(contacts[index].getLastName());
        cout << "|";
        wordCheck(contacts[index].getNickName());
        cout << std::endl;
    }
}

void PhoneBook::printAll() {
    int size = this->index;
    if (this->index >= 8)
        size = 7;
    for (int i = 0; i <= size; i++)
        printById(i);
}

void PhoneBook::wordCheck(string word) {
    if (word.length() > 10) {
        for (int i = 0; i < 9; i++)
            cout << static_cast<char>(word[i]);
        cout << ".";
    }
    else
    {
        for (int i = 10 - word.length(); i; i--)
            cout << " ";
        cout << word;
    }
}

void PhoneBook::printWithNumber(int index) {
    cout << index << "|";
    wordCheck(contacts[index].getFirstName());
    cout << "|";
    wordCheck(contacts[index].getLastName());
    cout << "|";
    wordCheck(contacts[index].getNickName());
    cout << "|";
    wordCheck(this->contacts[index].getPhoneNumber().c_str());
    cout << std::endl;
}