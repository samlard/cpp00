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

class PhoneBook
{
    private:

    public:
    int max_contacts; // Maximum number of contacts in the phonebook
        PhoneBook(int i);
        ~PhoneBook();
        void create_repertory(int max_contacts);
        void set_max_contacts();
        void print_contacts(); // Function to print all contacts

        
};

#endif

