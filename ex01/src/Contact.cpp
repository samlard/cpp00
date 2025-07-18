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
#include "../include/PhoneBook.hpp"

Contact::Contact()
{
    std::cout << "constru appele" << std::endl;
};

Contact::~Contact()
{
     std::cout << "destru appele" << std::endl;
};

void Contact::create_contact()
{
    std::cout << "firstname = ";
    getline(std::cin, this->firstname);
    std::cout << "lastname = ";
    getline(std::cin, this->lastname);
    std::cout << "nickname = ";
    getline(std::cin, this->nickname);
    std::cout << "PhoneNumber = ";
    getline(std::cin, this->PhoneNumber);
    std::cout << "DarkestSecret = ";
    getline(std::cin, this->DarkestSecret);
    std::cout << "Contact created" << std::endl;
};

std::string Contact::get_firstname() const
{
    return this->firstname;
}

std::string Contact::get_lastname() const
{
    return this->lastname;
}

std::string Contact::get_nickname() const
{
    return this->nickname;
}

std::string Contact::get_phone_number() const
{
    return this->PhoneNumber;
}

std::string Contact::get_darkest_secret() const
{
    return this->DarkestSecret;
}
