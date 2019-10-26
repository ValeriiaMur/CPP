/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Sorcerer.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: valeriiamuradian <valeriiamuradian@stud    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/25 18:29:27 by valeriiamur       #+#    #+#             */
/*   Updated: 2019/10/26 10:33:05 by valeriiamur      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Sorcerer.hpp"
#include "Victim.hpp"

Sorcerer::Sorcerer(std::string name, std::string title) : _name(name), _title(title)
{
    std::cout << _name << ", " << _title << " IS BORN" <<std::endl;
}

Sorcerer::~Sorcerer()
{
    std::cout << _name << ", " << _title << " IS DEAD. Consequences will never be the same! X_X" <<std::endl;
    return ;
}

std::string Sorcerer::getName(void) const
{
    return (this->_name);
}

std::string Sorcerer::getTitle(void) const
{
    return (this->_title);
}

void
Sorcerer::setName(std::string name)
{
    this->_name = name;
    return ;
}

void
Sorcerer::setTitle(std::string title)
{
    this->_title = title;
    return ;
}

Sorcerer
&Sorcerer::operator= (const Sorcerer &rhs)
{
    if (this != &rhs)
    {
      this->_name = rhs._name;
      this->_title = rhs._title;
    }
    return (*this);
}

Sorcerer::Sorcerer(void)
{
    this->_name = "Defaulty";
    this->_title = "Magician";
    std::cout << this->_name << ", " << this->_title << ", is born !" \
              << std::endl;
    return ;
}

std::ostream &operator<< (std::ostream &out, const Sorcerer &rhs)
{
    out << "I am " << rhs.getName() << ", " << rhs.getTitle() \
        << ", and I like ponies ! " << std::endl;
    return (out);
}

void Sorcerer::polymorph(const Victim &victim) const
{
    return (victim.getPolymorphed());
}