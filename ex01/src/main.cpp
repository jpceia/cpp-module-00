/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpceia <joao.p.ceia@gmail.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/06 02:48:53 by jceia             #+#    #+#             */
/*   Updated: 2021/12/14 11:45:55 by jpceia           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Phonebook.hpp"
#include <iostream>
#include <limits>

// case insensitive string comparison
bool iequals(const std::string &s1, const std::string &s2)
{
    if (s1.size() != s2.size())
        return false;
    for (size_t i = 0; i < s1.size(); ++i)
        if (tolower(s1[i]) != tolower(s2[i]))
            return false;
    return true;
}

// asks for an integer to the user
bool    getint(int &n)
{
    std::cin >> n;
    std::cin.ignore();
    if (std::cin.fail())
    {
        std::cin.clear();
        std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
        std::cout << "The provided input is not an integer." << std::endl;
        return false;
    }
    return true;
}

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
            phonebook.add_contact();
            std::cout << "Contact successfully added." << std::endl;
        }
        else if (iequals(command, "SEARCH"))
        {
            phonebook.print_contacts();
            success = false;
            while (!success)
            {
                std::cout << "Please provide the index of the contact you want to see more details" << std::endl;
                if (!getint(index))
                    continue;
                success = phonebook.print_contact(index);
            }
        }
        else
            std::cout << "Invalid command" << std::endl; 
    }
    return 0;
}
