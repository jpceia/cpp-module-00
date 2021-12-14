/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpceia <joao.p.ceia@gmail.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/14 12:36:34 by jpceia            #+#    #+#             */
/*   Updated: 2021/12/14 12:47:09 by jpceia           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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
// if the user enters an invalid integer, it returns false
bool getint(int &n)
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
