#include "Contact.h"

string Contact::getFirstName() {
    return firstName;
}

void Contact::setFirstName(string firstName) {
    this->firstName = firstName;
}

string Contact::getLastName() {
    return lastName;
}

void Contact::setLastName(string lastName) {
	this->lastName = lastName;
}

string Contact::getNickName() {
    return nickName;
}

void Contact::setNickName(string nickName) {
    this->nickName = nickName;
}

string Contact::getPhoneNumber() {
    return phoneNumber;
}

void Contact::setPhoneNumber(string phoneNumber) {
    this->phoneNumber = phoneNumber;
}