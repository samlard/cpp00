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

PhoneBook::PhoneBook(int i) : max_contacts(i)
{
    std::cout << "PhoneBook constructor called" << std::endl;
    std::cout << "max = : " << this->max_contacts <<std::endl;
    // Initialize any necessary members or resources here
};

PhoneBook::~PhoneBook()
{
    std::cout << "phonebook destructor called" << std::endl;
};

void PhoneBook::set_max_contacts()
{
    int i;
    std::cout << "Setting maximum contacts...";
    std::cin >> i;
    this->max_contacts = (int)i;
};

void PhoneBook::print_contacts()
{
    std::cout << "Printing max contacts: " << this->max_contacts << std::endl;
    // Logic to print all contacts can be added here
    // For example, iterating through a list of contacts and printing their details
};




