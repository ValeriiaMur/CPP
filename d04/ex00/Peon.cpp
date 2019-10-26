/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Peon.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: valeriiamuradian <valeriiamuradian@stud    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/26 10:12:05 by valeriiamur       #+#    #+#             */
/*   Updated: 2019/10/26 10:40:15 by valeriiamur      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Peon.hpp"

Peon::Peon(void)
{
    this->_name = "Edward";
    std::cout << "Zog zog." << std::endl;
    return ;
}

Peon::Peon(std::string name)
{
    this->_name = name;
    std::cout << "Zog zog." << std::endl;
    return ;
}

Peon::Peon(const Peon &src)
{
    *this = src;
    return ;
}

/*
** Destructors
*/

Peon::~Peon(void)
{
    std::cout << "Bleuark..." << std::endl;
    return ;
}

/*
** Operators
*/

Peon
&Peon::operator= (const Peon &rhs)
{
    if (this != &rhs)
    {
        this->_name = rhs._name;
    }
    return (*this);
}

void
Peon::getPolymorphed(void) const
{
    std::cout << this->_name << " has been turned into a pink pony !" \
              << std::endl;
    return ;
}
