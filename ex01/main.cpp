#include "PhoneBook.h"
#include <iostream>
using namespace std;

void    ft_toUpper(string &s)
{
    for (int i = s.length() - 1; i + 1; i--)
    {
        if (s[i] >= 'a' && s[i] <= 'z')
            s[i] -= 32;
    }
}

int main()
{
    PhoneBook phoneBook1;
    string input;
    cout << "Which process do you want >> ADD - SEARCH - EXIT ?" << endl;
    while (std::cin >> input)
    {
        ft_toUpper(input);
        if (input == "ADD")
        {
            string name;
            string lastName;
            string nickName;
            string phoneNumber;
            cout << "Enter first name: ";
            cin >> name;
            cout << endl << "Enter last name:";
            cin >> lastName;
            cout << endl << "Enter nick name:";
            cin >> nickName;
            cout << endl << "Enter phone number:";
            cin >> phoneNumber;
            phoneBook1.add(name, lastName, nickName, phoneNumber);
        }
        else if (input == "SEARCH")
        {
            int getIndex;
            phoneBook1.printAll();
            cin >> getIndex;
            phoneBook1.printWithNumber(getIndex);
        }
        else if (input == "EXIT")
        {
            exit(0);
        }
        cout << "Which process do you want >> ADD - SEARCH - EXIT ?" << endl;
    }
}