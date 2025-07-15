/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssoumill <ssoumill@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/10 18:45:46 by ssoumill          #+#    #+#             */
/*   Updated: 2025/07/10 20:52:37 by ssoumill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/PhoneBook.hpp"
#include <iostream>

PhoneBook::PhoneBook()
{
    std::cout << "PhoneBook has been created." << std::endl;
    // Initialize any necessary members or resources here
};

PhoneBook::~PhoneBook()
{
    std::cout << "phonebook destructor called" << std::endl;
};


void PhoneBook::add_contact()
{
    std::cout << "Adding a new contact..." << std::endl;
    Contact new_contact;
    
    new_contact.create_contact();
    if (!this->check_full())
    {
        this->registry[nbr_contact] = new Contact(new_contact);
        this->nbr_contact++;
        std::cout << "Contact added successfully." << std::endl;
    }
    else
    {
        std::cout << "PhoneBook is full. Cannot add more contacts." << std::endl;
    }

    
    
};

int PhoneBook::check_full()
{
    if (nbr_contact >= 8)
        return 1;
    
    else
        return 0;
}




