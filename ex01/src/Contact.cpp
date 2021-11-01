/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jceia <jceia@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/01 03:30:45 by jceia             #+#    #+#             */
/*   Updated: 2021/11/01 05:08:39 by jceia            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"
#include <iostream>
#include <iomanip>


void    Contact::set_values(void)
{
    std::cout << "Please provide the new contact's information:" << std::endl;

    std::cout << "First name: ";
    std::getline(std::cin, _first_name);

    std::cout << "Last name: ";
    std::getline(std::cin, _last_name);

    std::cout << "Nickname: ";
    std::getline(std::cin, _nickname);

    std::cout << "Phone number: ";
    std::getline(std::cin, _phone_number);

    std::cout << "Darkest secret: ";
    std::getline(std::cin, _darkest_secret);
}

void    Contact::print_short(int index)
{
    std::cout << std::setw(10) << index << " | ";
    std::cout << std::setw(10) << _first_name    << " | ";
    std::cout << std::setw(10) << _last_name << " | ";
    std::cout << std::setw(10) << _nickname << " | " ;
    std::cout << std::endl;
}

void   Contact::print_full(void)
{
    std::cout << "First name: " << _first_name << std::endl;
    std::cout << "Last name: " << _last_name << std::endl;
    std::cout << "Nickname: " << _nickname << std::endl;
    std::cout << "Phone number: " << _phone_number << std::endl;
    std::cout << "Darkest secret: " << _darkest_secret << std::endl;
    std::cout << std::endl;
}
