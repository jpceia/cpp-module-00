/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jceia <jceia@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/01 03:30:42 by jceia             #+#    #+#             */
/*   Updated: 2021/11/01 05:09:01 by jceia            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_HPP
# define CONTACT_HPP

#include <iostream>

class   Contact
{
public:
    Contact(void);
    Contact(
        const std::string &first_name,
        const std::string &last_name,
        const std::string &nickname,
        const std::string &phone_number,
        const std::string &darkest_secret
    );
    void    set_values(void);
    void    print_short(int index);
    void    print_full(void);
private:
    std::string _first_name;
    std::string _last_name;
    std::string _nickname;
    std::string _phone_number;
    std::string _darkest_secret;
};

#endif
