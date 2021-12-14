/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpceia <joao.p.ceia@gmail.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/06 01:26:58 by jceia             #+#    #+#             */
/*   Updated: 2021/12/14 13:39:24 by jpceia           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>

void    strupper(std::string& s)
{
    for (unsigned int i = 0; i < s.length(); i++)
        s[i] = std::toupper(s[i]);
}

int main(int argc, char *argv[])
{
    if (argc == 1)
        std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *";
    else
    {
        for (int i = 1; i < argc; i++)
        {
            std::string s = argv[i];
            strupper(s);
            std::cout << s;
        }
    }
    std::cout << std::endl;
    return 0;
}
