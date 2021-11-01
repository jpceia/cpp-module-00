/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jceia <jceia@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/06 02:48:53 by jceia             #+#    #+#             */
/*   Updated: 2021/11/01 05:07:57 by jceia            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Phonebook.hpp"
#include <iostream>

int main()
{
    Phonebook   phonebook;
    std::string command;
    int         index;
    bool        success;

    while (true)
    {
        std::cout << "Please insert one of the following commands: ADD, SEARCH, EXIT" << std::endl;
        std::getline(std::cin, command);
        if (command == "EXIT")
        {
            std::cout << "Thank you for using Phonebook." << std::endl;
            break;
        }
        if (command == "ADD")
        {
            phonebook.add_contact();
            std::cout << "Contact successfully added." << std::endl;
        }
        else if (command == "SEARCH")
        {
            phonebook.print_contacts();
            std::cout << "Please provide the index of the contact you want to see more details" << std::endl;
            success = false;
            while (!success)
            {
                std::cin >> index;
                std::cin.ignore();
                success = phonebook.print_contact(index);
            }
        }
        else
            std::cout << "Invalid command" << std::endl; 
    }
    return (0);
}
