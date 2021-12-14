/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Phonebook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jceia <jceia@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/06 01:46:59 by jceia             #+#    #+#             */
/*   Updated: 2021/11/01 05:08:27 by jceia            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Phonebook.hpp"
#include "Contact.hpp"
#include <iostream>
#include <iomanip>


Phonebook::Phonebook(void)
{
    _index = -1;
    _size = 0;
}

void    Phonebook::add_contact()
{
    _index = (_index + 1) % PHONEBOOK_MAX_SIZE;
    if (_size < PHONEBOOK_MAX_SIZE)
        _size++;
    _contacts[_index] = create_contact();
}

void    Phonebook::print_contacts()
{
    std::cout << std::setw(10) << "Index" << " | ";
    std::cout << std::setw(10) << "First name" << " | ";
    std::cout << std::setw(10) << "Last name" << " | ";
    std::cout << std::setw(10) << "Nickname" << " | ";
    std::cout << std::endl;
    for (int index = 0; index < _size; index++)
        _contacts[index].print_short(index);
}

bool    Phonebook::print_contact(int index)
{
    if (index < 0 || index >= _size)
    {
        std::cout << "Invalid index. Please provide a valid one." << std::endl;
        return (false);
    }
    _contacts[index].print_full();
    return (true);
}
