/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Phonebook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpceia <joao.p.ceia@gmail.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/06 01:46:59 by jceia             #+#    #+#             */
/*   Updated: 2021/12/14 12:54:48 by jpceia           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Phonebook.hpp"
#include "Contact.hpp"
#include <iostream>
#include <iomanip>

// Utils functions declarations
bool getint(int &n);

Phonebook::Phonebook(void)
{
    _index = -1;
    _size = 0;
}

int Phonebook::add_contact(Contact contact)
{
    _index = (_index + 1) % PHONEBOOK_MAX_SIZE;
    if (_size < PHONEBOOK_MAX_SIZE)
        _size++;
    _contacts[_index] = contact;
    return _index;
}

void Phonebook::print_contacts() const
{
    std::cout << std::setw(10) << "Index" << " | ";
    std::cout << std::setw(10) << "First name" << " | ";
    std::cout << std::setw(10) << "Last name" << " | ";
    std::cout << std::setw(10) << "Nickname" << " | ";
    std::cout << std::endl;
    for (int index = 0; index < _size; index++)
        _contacts[index].print_short(index);
}

const Contact& Phonebook::get_contact(int index) const
{
    return _contacts[index];
}

int Phonebook::get_size() const
{
    return (_size);
}

void search_phonebook(Phonebook &phonebook)
{
    int     index;

    if (phonebook.get_size() == 0)
    {
        std::cout << "The phonebook is empty." << std::endl;
        return ;
    }
    phonebook.print_contacts();
    std::cout << std::endl;
    while (42)
    {
        std::cout << "Please provide the index of the contact you want to see more details." << std::endl;
        if (!getint(index))
            continue;
        if (index < 0 || index >= phonebook.get_size())
        {
            std::cout << "The provided index does not exist in the phonebook." << std::endl;
            continue ;
        }
        std::cout << std::endl << "Contact details:" << std::endl;
        phonebook.get_contact(index).print_full();
        break ;
    }
}
