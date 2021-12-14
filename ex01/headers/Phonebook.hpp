/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Phonebook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpceia <joao.p.ceia@gmail.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/06 02:49:20 by jceia             #+#    #+#             */
/*   Updated: 2021/12/14 12:44:52 by jpceia           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

#include <iostream>
#include <iomanip>
#include "Contact.hpp"

# define PHONEBOOK_MAX_SIZE 8

class Phonebook
{
public:
    Phonebook(void);
    int add_contact(Contact contact);
    void print_contacts(void) const;
    const Contact& get_contact(int index) const;
    int get_size(void) const;
private:
    Contact _contacts[PHONEBOOK_MAX_SIZE];
    int     _index;
    int     _size;
};

void search_phonebook(Phonebook &phonebook);

#endif
