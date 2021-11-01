/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jceia <jceia@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/06 01:26:58 by jceia             #+#    #+#             */
/*   Updated: 2021/11/01 03:03:40 by jceia            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>

char    *cstr_toupper(char *s)
{
    for (int i = 0; s[i] != '\0'; i++)
        s[i] = toupper(s[i]);
    return s;
}

int main(int argc, char *argv[])
{
    if (argc == 1)
        std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *";
    else
    {
        for (int i = 1; i < argc; i++)
            std::cout << cstr_toupper(argv[i]);
    }
    std::cout << std::endl;
    return 0;
}
