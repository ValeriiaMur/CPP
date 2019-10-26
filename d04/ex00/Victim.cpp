/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Victim.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: valeriiamuradian <valeriiamuradian@stud    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/26 09:53:31 by valeriiamur       #+#    #+#             */
/*   Updated: 2019/10/26 10:32:36 by valeriiamur      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Victim.hpp"

Victim::Victim(std::string name) : _name(name)
{
    std::cout << "Some random victim called " << this->_name << " just popped !"<< std::endl;
};

Victim::Victim(){
    this->_name = "Bob";
    std::cout << "Some random victim called " << this->_name << " just popped !"<< std::endl;
    return ;
};

Victim::~Victim(){
    std::cout << "Victim " << this->_name << " just died for no apparent reason !"<< std::endl;
    return;
};

std::string Victim::getName(void) const
{
    return (this->_name);
};

void Victim::setName(std::string str)
{
    this->_name = str;
    return ;
};

Victim &Victim::operator= (const Victim &rhs)
{
    if (this != &rhs)
    {
      this->_name = rhs._name;
    }
    return (*this);
}

std::ostream &operator<< (std::ostream &out, const Victim &rhs)
{
    out << "I am " << rhs.getName() << " and I like otters ! " << std::endl;
    return (out);
}

void Victim::getPolymorphed(void) const
{
    std::cout << this->_name << " has been turned into a cute little sheep !"<< std::endl;
}

Victim::Victim(const Victim &src)
{
    *this = src;
    return ;
}