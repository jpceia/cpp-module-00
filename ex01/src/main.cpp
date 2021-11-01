/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jceia <jceia@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/06 02:48:53 by jceia             #+#    #+#             */
/*   Updated: 2021/11/01 03:20:55 by jceia            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Phonebook.hpp"
#include <iostream>

int main()
{
    Phonebook   pb;
    std::string command;
    int         index;

    while (true)
    {
        std::cout << "Please insert one of the following commands" << std::endl;
        std::getline(std::cin, command);
        if (command == "EXIT")
        {
            std::cout << "Thank you for using CrapyBook." << std::endl;
            break;
        }
        if (command == "ADD")
        {
            pb.add_contact();
            continue ;
        }
        else if (command == "SEARCH")
        {
            pb.print_contacts();
            std::cout << "Please provide the index of the contact you want to see more details" << std::endl;
            std::cin >> index;
            pb.print_contact(index);
            continue ;
        }
        std::cout << "Invalid command" << std::endl; 
    }
}