/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpceia <joao.p.ceia@gmail.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/06 02:48:53 by jceia             #+#    #+#             */
/*   Updated: 2021/12/14 12:37:17 by jpceia           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Phonebook.hpp"
#include <iostream>

bool iequals(const std::string &s1, const std::string &s2);
bool getint(int &n);

int main(void)
{
    Phonebook   phonebook;
    std::string command;
    int         index;
    bool        success;

    while (true)
    {
        std::cout << "Please insert one of the following commands: ADD, SEARCH, EXIT" << std::endl;
        std::getline(std::cin, command);
        if (iequals(command, "EXIT"))
        {
            std::cout << "Thank you for using Phonebook." << std::endl;
            break;
        }
        else if (iequals(command, "ADD"))
        {
            phonebook.add_contact(create_contact());
            std::cout << "Contact successfully added." << std::endl;
        }
        else if (iequals(command, "SEARCH"))
        {
            if (phonebook.get_size() == 0)
            {
                std::cout << "The phonebook is empty." << std::endl;
                continue;
            }
            phonebook.print_contacts();
            success = false;
            while (!success)
            {
                std::cout << "Please provide the index of the contact you want to see more details" << std::endl;
                if (!getint(index))
                    continue;
                if (index < 0 || index >= phonebook.get_size())
                {
                    std::cout << "The provided index does not exist." << std::endl;
                    continue;
                }
                phonebook.get_contact(index).print_full();
                success = true;
            }
            std::cout << std::endl;
        }
        else
            std::cout << "Invalid command" << std::endl; 
    }
    return 0;
}
