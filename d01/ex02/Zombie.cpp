/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: valeriiamuradian <valeriiamuradian@stud    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/22 18:54:05 by valeriiamur       #+#    #+#             */
/*   Updated: 2019/10/23 18:25:33 by valeriiamur      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie(std::string Name, std::string Type) : _name(Name), _type(Type)
{
    return;
};

Zombie::~Zombie()
{
    std::cout <<"Oh no, Zombie named " + this->_name + " dies!" <<std::endl;
    return;
};

std::string Zombie::announce()
{
    std::string message;

    message = "My name is " + this->_name + " I am a " + this->_type + " Braiiiiiiinnnssss...";
    return (message);
}
