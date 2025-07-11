/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssoumill <ssoumill@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/10 18:53:10 by ssoumill          #+#    #+#             */
/*   Updated: 2025/07/10 20:54:21 by ssoumill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/Contact.hpp"
#include "../include/PhoneBook.hpp"
#include <string>

int main(void)
{
    std::string input;

    while (getline(std::cin, input) && input != "EXIT")
    {
        if (std::string(input) == "EXIT")
            break;
        else if (std::string(input) == "ADD")
        {
            std::cout << "Adding a new contact..." << std::endl;
        }
    }
    // Additional logic can be added here to interact with the PhoneBook and Contact classes
    return (0);
}