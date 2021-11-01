/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Phonebook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jceia <jceia@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/06 02:49:20 by jceia             #+#    #+#             */
/*   Updated: 2021/11/01 03:50:14 by jceia            ###   ########.fr       */
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
    Phonebook();
    ~Phonebook();
    void    add_contact();
    void    print_contacts();
    void    print_contact(int index);
private:
    Contact *_contacts;
    size_t  _size;
};

#endif