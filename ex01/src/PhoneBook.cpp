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
    for (int i = 0; i < 2; i++)
        this->nbr_contact = 0; // Initialize the registry to nullptr
    std::cout << "PhoneBook has been created with a capacity for "<< std::endl;
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
        this->registry[nbr_contact] = &new_contact;
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




