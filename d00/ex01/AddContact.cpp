/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AddContact.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: valeriiamuradian <valeriiamuradian@stud    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/19 13:53:53 by valeriiamur       #+#    #+#             */
/*   Updated: 2019/10/21 21:01:48 by valeriiamur      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.Class.hpp"

Contact AddContact(void)
{
    std::string input;
    Contact newContact;

    std::cout << "Enter your name:" << std::endl;
    std::cin >> input;
    newContact.setFirstName(input);
    std::cout << "Enter your last name:" << std::endl;
    std::cin >> input;
    newContact.setLastName(input);
    std::cout << "Enter your nickname:" << std::endl;
    std::cin >> input;
    newContact.setNickname(input);
    std::cout << "Enter your login:" << std::endl;
    std::cin >> input;
    newContact.setLogin(input);
    std::cout << "Enter your postal address:" << std::endl;
    std::cin >> input;
    newContact.setPostalAddress(input);
    std::cout << "Enter your email, ok?" << std::endl;
    std::cin >> input;
    newContact.setEmailAddress(input);
    std::cout << "Enter your phone number:" << std::endl;
    std::cin >> input;
    newContact.setPhoneNumber(input);
    std::cout << "Enter your birthday date:" << std::endl;
    std::cin >> input;
    newContact.setBirthdayDate(input);
    std::cout << "Enter your favorite meal:" << std::endl;
    std::cin >> input;
    newContact.setFavoriteMeal(input);
    std::cout << "Enter your undewear color:" << std::endl;
    std::cin >> input;
    newContact.setUnderwearColor(input);
    std::cout << "Enter your darkest secret:" << std::endl;
    std::cin >> input;
    newContact.setDarkestSecret(input);
    return (newContact);
}