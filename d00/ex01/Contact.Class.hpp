/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.Class.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: valeriiamuradian <valeriiamuradian@stud    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/18 09:41:39 by valeriiamur       #+#    #+#             */
/*   Updated: 2019/10/21 21:01:21 by valeriiamur      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_CLASS_HPP
# define CONTACT_CLASS_HPP

# include <string>
# include <iostream>
# include <iomanip>

const int MAX_NUM_CONTACTS = 8;
const int FIELD_WIDTH = 10;

class Contact {

public:

    Contact(void);
    ~Contact(void);
    void            setFirstName(std::string);
    void            setLastName(std::string);
    void            setNickname(std::string);
    void            setLogin(std::string);
    void            setPostalAddress(std::string);
    void            setEmailAddress(std::string);
    void            setPhoneNumber(std::string);
    void            setBirthdayDate(std::string);
    void            setFavoriteMeal(std::string);
    void            setUnderwearColor(std::string);
    void            setDarkestSecret(std::string);
    std::string     getFirstName(void);
    std::string     getLastName(void);
    std::string     getNickname(void);
    std::string     getLogin(void);
    std::string     getPostalAddress(void);
    std::string     getEmailAddress(void);
    std::string     getPhoneNumber(void);
    std::string     getBirthdayDate(void);
    std::string     getFavoriteMeal(void);
    std::string     getUnderWearColor(void);
    std::string     getDarkestSecret(void);

private:

    std::string     _firstName;
    std::string     _lastName;
    std::string     _nickname;
    std::string     _login;
    std::string     _postalAddress;
    std::string     _emailAdress;
    std::string     _phoneNumber;
    std::string     _birthdayDate;
    std::string     _favoriteMeal;
    std::string     _underwearColor;
    std::string     _darkestSecret;

};

Contact         AddContact(void);
void            showPhonebook(Contact phonebook[], int contact_index);

#endif