/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssoumill <ssoumill@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/10 18:45:53 by ssoumill          #+#    #+#             */
/*   Updated: 2025/07/10 20:52:57 by ssoumill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "../include/Contact.hpp"

Contact::Contact()
{
    std::cout << "constru appele" << std::endl;
};

Contact::~Contact()
{
     std::cout << "destru appele" << std::endl;
};

// std::string Contact::get_firstname ()
// {
//     return this->firstname;
// }

// void Contact::set_firstname(std::string firstname)
// {
//     this->firstname = firstname;
// }

