/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: valeriiamuradian <valeriiamuradian@stud    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/23 19:22:17 by valeriiamur       #+#    #+#             */
/*   Updated: 2019/10/23 19:33:49 by valeriiamur      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

Brain::Brain()
{
    setAddress();
    return ;
};

Brain::~Brain()
{
    return ;
};

void Brain::setAddress(void)
{
    std::stringstream   buff;

    buff << this;
    this->_address = buff.str();
    return ;
}

std::string Brain::getAddress(void)
{
    return (this->_address);
}

std::string Brain::identify(void)
{
    return (this->getAddress());
}