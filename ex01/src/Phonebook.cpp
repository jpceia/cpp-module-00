/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Phonebook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jceia <jceia@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/06 01:46:59 by jceia             #+#    #+#             */
/*   Updated: 2021/11/01 03:51:24 by jceia            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Phonebook.hpp"
#include "Contact.hpp"
#include <iostream>
#include <iomanip>


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
