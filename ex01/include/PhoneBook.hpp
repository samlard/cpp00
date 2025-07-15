/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssoumill <ssoumill@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/10 18:45:57 by ssoumill          #+#    #+#             */
/*   Updated: 2025/07/10 18:49:01 by ssoumill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP
#include "Contact.hpp"
#include <iostream>
#include <string>

class PhoneBook
{
    private:
        Contact *registry[2];
        int nbr_contact; // Number of contacts currently in the phonebook

    public:
        PhoneBook();
        ~PhoneBook();
        void add_contact(); // Function to add a contact
        int check_full(); // Function to check if the phonebook is full
};

#endif

