/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpceia <joao.p.ceia@gmail.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/01 03:30:45 by jceia             #+#    #+#             */
/*   Updated: 2021/12/14 12:12:02 by jpceia           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"
#include <iostream>
#include <iomanip>

Contact::Contact(void)
{
}

Contact::Contact(
    const std::string &first_name,
    const std::string &last_name,
    const std::string &nickname,
    const std::string &phone_number,
    const std::string &darkest_secret
) :
    _first_name(first_name),
    _last_name(last_name),
    _nickname(nickname),
    _phone_number(phone_number),
    _darkest_secret(darkest_secret)
{
}

std::string str_truncate(std::string s, size_t max_length)
{
    if (s.length() > max_length)
        s = s.substr(0, 9) + ".";
    return (s);
}

void    Contact::print_short(int index) const
{
    std::cout << std::setw(10) << index << " | ";
    std::cout << std::setw(10) << str_truncate(_first_name, 10) << " | ";
    std::cout << std::setw(10) << str_truncate(_last_name, 10) << " | ";
    std::cout << std::setw(10) << str_truncate(_nickname, 10) << " | " ;
    std::cout << std::endl;
}

void   Contact::print_full(void) const
{
    std::cout << "First name: " << _first_name << std::endl;
    std::cout << "Last name: " << _last_name << std::endl;
    std::cout << "Nickname: " << _nickname << std::endl;
    std::cout << "Phone number: " << _phone_number << std::endl;
    std::cout << "Darkest secret: " << _darkest_secret << std::endl;
}

Contact create_contact(void)
{
    std::string first_name;
    std::string last_name;
    std::string nickname;
    std::string phone_number;
    std::string darkest_secret;
    
    std::cout << "Please provide the new contact's information:" << std::endl;

    std::cout << "First name: ";
    std::getline(std::cin, first_name);

    std::cout << "Last name: ";
    std::getline(std::cin, last_name);

    std::cout << "Nickname: ";
    std::getline(std::cin, nickname);

    std::cout << "Phone number: ";
    std::getline(std::cin, phone_number);

    std::cout << "Darkest secret: ";
    std::getline(std::cin, darkest_secret);

    return Contact(first_name, last_name, nickname, phone_number, darkest_secret);
}
