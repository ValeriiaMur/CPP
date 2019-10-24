/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: valeriiamuradian <valeriiamuradian@stud    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/22 18:54:05 by valeriiamur       #+#    #+#             */
/*   Updated: 2019/10/23 19:01:37 by valeriiamur      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie(std::string Name, std::string Type) : _name(Name), _type(Type)
{
    return;
};

Zombie::~Zombie()
{
    return;
};

Zombie::Zombie()
{
    return;
};

void Zombie::setType(std::string str)
{
    this->_type = str;
    return ;
};

void Zombie::setName(std::string str)
{
    this->_name = str;
    return ;
}

std::string Zombie::announce()
{
    std::string message;

    message = "My name is " + this->_name + " I am a " + this->_type + " Braiiiiiiinnnssss...";
    return (message);
}
