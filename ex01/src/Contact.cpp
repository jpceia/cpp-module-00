/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jceia <jceia@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/01 03:30:45 by jceia             #+#    #+#             */
/*   Updated: 2021/11/01 03:51:58 by jceia            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"
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