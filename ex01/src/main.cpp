/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpceia <joao.p.ceia@gmail.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/06 02:48:53 by jceia             #+#    #+#             */
/*   Updated: 2021/12/14 12:49:35 by jpceia           ###   ########.fr       */
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

    while (true)
    {
        std::cout << "Please insert one of the following commands: ADD, SEARCH, EXIT" << std::endl;
        std::getline(std::cin, command);
        std::cout << std::endl;
        if (iequals(command, "EXIT"))
        {
            std::cout << "Thank you for using Phonebook." << std::endl;
            break;
        }
        else if (iequals(command, "ADD"))
        {
            phonebook.add_contact(create_contact());
            std::cout << "Contact successfully added." << std::endl;
            std::cout << std::endl;
        }
        else if (iequals(command, "SEARCH"))
        {
            search_phonebook(phonebook);
            std::cout << std::endl;
        }
        else
            std::cout << "Invalid command" << std::endl; 
    }
    return 0;
}
