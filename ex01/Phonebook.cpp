/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jceia <jceia@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/06 01:46:59 by jceia             #+#    #+#             */
/*   Updated: 2021/10/06 02:52:59 by jceia            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "phonebook.hpp"
#include <iostream>
#include <iomanip>

void    ask_value(std::string var_name, std::string var_ptr)
{
    std::cout << "What is the " << var_name << "?" << std::endl;
    std::getline(std::cin, var_ptr);
}

void    Contact::ask_user_values()
{
    std::cout << "Please provide the new contact's information." << std::endl;
    ask_value("first name",     _first_name);
    ask_value("last name",      _last_name);
    ask_value("nickname",       _nickname);
    ask_value("phone number",   _phone_number);
    ask_value("darkest secret", _darkest_secret);
}

void    Contact::short_print(int index)
{
    std::cout << std::setw(10) << index << " | ";
    std::cout << std::setw(10) << _first_name    << " | ";
    std::cout << std::setw(10) << _last_name << " | ";
    std::cout << std::setw(10) << _nickname << " | " ;
}

void   Contact::full_print()
{
    std::cout << "First name: " << _first_name << std::endl;
    std::cout << "Last name: " << _last_name << std::endl;
    std::cout << "Nickname: " << _nickname << std::endl;
    std::cout << "Phone number: " << _phone_number << std::endl;
    std::cout << "Darkest secret: " << _darkest_secret << std::endl;
}

Phonebook::Phonebook()
{
    _contacts = new Contact[8];
    _size = 0;
}

Phonebook::~Phonebook()
{
    // what happens if the destructor fails?
    delete[] _contacts;
}

void    Phonebook::add_contact()
{
    Contact  contact;

    contact.ask_user_values();
    _contacts[_size] = contact;
    _size = (_size + 1) % PHONEBOOK_MAX_SIZE;
}

void    Phonebook::print_contacts()
{
    std::cout << "index      | first name |  last name |  nickname " << std::endl;
    for (size_t i=0; i < _size; i++)
        _contacts[i].short_print(i);
}

void    Phonebook::print_contact(int index)
{
    if (index < 0 || index >= (int)_size)
    {
        std::cout << "Invalid index" << std::endl;
        return ;
    }
    _contacts[index].full_print();
}
