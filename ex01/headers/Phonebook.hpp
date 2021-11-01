/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Phonebook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jceia <jceia@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/06 02:49:20 by jceia             #+#    #+#             */
/*   Updated: 2021/11/01 04:52:18 by jceia            ###   ########.fr       */
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
    void    add_contact(void);
    void    print_contacts(void);
    bool    print_contact(int index);
private:
    Contact _contacts[8];
    int     _index;
    int     _size;
};

#endif
