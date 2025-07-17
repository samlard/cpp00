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

PhoneBook::PhoneBook() : index(0) // Initialize index to 0
{
    std::cout << "PhoneBook has been created with a capacity for 8 contacts." << std::endl;
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
    if (!this->get_index())
    {
        this->registry[index] = new_contact;
        this->index++;
        std::cout << "Contact added successfully." << std::endl;
    }
    else
    {
        std::cout << "PhoneBook is full. Cannot add more contacts." << std::endl;
    }
};

int PhoneBook::get_index()
{
    return this->index % 8;
}

void  PhoneBook::search_contacts()
{
    std::cout << "Searching for contacts..." << std::endl;
    std::cout << "index     |first name|last name|nickname" << std::endl;
    for (int i = 0; i < this->index && i < 8; i++)
    {
        
        std::cout << i << "         |" 
                  << this->registry[i].get_firstname() << "|"
                  << this->registry[i].get_lastname() << "|"
                  << this->registry[i].get_nickname() << "|" << std::endl;
        // Assuming Contact class has a method to display contact details
        // this->registry[i].display_contact(); // Uncomment if display_contact method exists
    }
    if (this->index == 0)
        std::cout << "No contacts available." << std::endl;
}


