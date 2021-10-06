/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jceia <jceia@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/06 02:49:20 by jceia             #+#    #+#             */
/*   Updated: 2021/10/06 02:51:30 by jceia            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

#include <iostream>
#include <iomanip>

# define PHONEBOOK_MAX_SIZE 8

class   Contact
{
public:
    void    ask_user_values();
    void    short_print(int index);
    void    full_print();
private:
    std::string _first_name;
    std::string _last_name;
    std::string _nickname;
    std::string _phone_number;
    std::string _darkest_secret;
};

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