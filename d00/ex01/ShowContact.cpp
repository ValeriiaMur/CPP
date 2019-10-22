/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShowContact.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: valeriiamuradian <valeriiamuradian@stud    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/19 13:54:10 by valeriiamur       #+#    #+#             */
/*   Updated: 2019/10/21 21:17:32 by valeriiamur      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.Class.hpp"

std::string truncateContact(std::string field)
{
    field = field.erase((FIELD_WIDTH - 1), field.length() - (FIELD_WIDTH - 1)); //first pos, then len
    field.append(".");
    return (field);
}

void searchContact(Contact phonebook[], int contacts)
{
    int          index;

    std::cout << "Start by entering the index of a contact: ";
    std::cin >> index;
    std::cout << std::endl;
    if (std::cin.good() && (index >= 0 && index < contacts))
    {
        std::cout << phonebook[index].getFirstName() << std::endl;
        std::cout << phonebook[index].getLastName() << std::endl;
        std::cout << phonebook[index].getNickname() << std::endl;
        std::cout << phonebook[index].getLogin() << std::endl;
        std::cout << phonebook[index].getPostalAddress() << std::endl;
        std::cout << phonebook[index].getEmailAddress() << std::endl;
        std::cout << phonebook[index].getPhoneNumber() << std::endl;
        std::cout << phonebook[index].getBirthdayDate() << std::endl;
        std::cout << phonebook[index].getFavoriteMeal() << std::endl;
        std::cout << phonebook[index].getUnderWearColor() << std::endl;
        std::cout << phonebook[index].getDarkestSecret() << std::endl;
    }
    else
    {
        std::cin.clear();
        std::cout << "Sorry, this index and contact were not be found. :(" << std::endl;
    }
}

void            showPhonebook(Contact phonebook[], int contacts)
{
    std::string firstName;
    std::string lastName;
    std::string nickname;

    std::cout.width(FIELD_WIDTH); 
    std::cout << std::right;
    std::cout << "|     Index|First Name| Last Name|  Nickname|" << std::endl;
    for (int i = 0; i < contacts; i ++)
    {
        firstName = phonebook[i].getFirstName();
        lastName = phonebook[i].getLastName();
        nickname = phonebook[i].getNickname();

        std::cout << "|" << std::setw(FIELD_WIDTH) << i;
        if (firstName.length() >= FIELD_WIDTH)
        {
            firstName = truncateContact(firstName);
        }
        std::cout << "|" << std::setw(FIELD_WIDTH) << firstName;
        if (lastName.length() >= FIELD_WIDTH)
        {
            lastName = truncateContact(lastName);
        }
        std::cout << "|" << std::setw(FIELD_WIDTH) << lastName;
        if (nickname.length() > FIELD_WIDTH)
        {
            nickname = truncateContact(nickname);
        }
        std::cout << "|" << std::setw(FIELD_WIDTH) << nickname;
        std::cout << "|" << std::endl;
    }
    searchContact(phonebook, contacts);
}

