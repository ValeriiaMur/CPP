/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: valeriiamuradian <valeriiamuradian@stud    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/19 13:16:38 by valeriiamur       #+#    #+#             */
/*   Updated: 2019/10/21 21:10:10 by valeriiamur      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.Class.hpp"

void start_phonebook(void)
{
    std::cout << "Welcome to the Awesome Phonebook (or best phonebook ever (ツ)_/¯)" << std::endl;
    std::cout << "You can do anything you want with it but there are only 3 commands available:" << std::endl;
    std::cout << "You can ADD a contact, SEARCH, and EXIT" << std::endl;
    std::cout << "Good luck, have fun ( ͡° ͜ʖ ͡°)" << std::endl;
}

int main(int argc, char **argv)
{
    int contact_index;
    Contact new_phonebook[MAX_NUM_CONTACTS];
    std::string command;

    contact_index = 0;
    start_phonebook();
    while(1)
    {
        getline(std::cin, command, '\n');
        if (command == "ADD")
        {
            if (contact_index <= MAX_NUM_CONTACTS)
            {
                new_phonebook[contact_index++] = AddContact();
                std::cout << "The new Contact was added!" <<std::endl;
            }
            else
            {
                std::cout << "Sorry but the awesome phonebook is full ಠ_ಠ" << std::endl;
            }
        }
        else if (command == "SEARCH")
        {
            if (contact_index > 0)
            {
                showPhonebook(new_phonebook, contact_index);
            }
            else
            {
                std::cout << "Well..there are no contacts to show, try ADD first ಠ_ಠ" << std::endl;
            }
        }
        else if (command == "EXIT")
        {
            break;
        }
        else
        {
            std::cout << "What else?"<< std::endl;
        }
    }
    return (0);
}