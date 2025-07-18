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
#include <cstdlib>

class PhoneBook
{
    private:
        Contact registry[8];
        int index; // Current index for adding contacts

    public:
        PhoneBook();
        ~PhoneBook();
        void add_contact(); // Function to add a contact
        int get_index(); // Function to get the current index
        void search_contacts(); // Function to search for contacstd::cout << "===========================================" << std::endl;
        std::string resize_string(const std::string str);
};

#endif

