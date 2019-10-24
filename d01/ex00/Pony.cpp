/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Pony.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: valeriiamuradian <valeriiamuradian@stud    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/22 17:15:40 by valeriiamur       #+#    #+#             */
/*   Updated: 2019/10/22 18:16:47 by valeriiamur      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Pony.hpp"

Pony::Pony(std::string Name) : _Name(Name)
{
    std::cout << "The pony named " <<this->_Name << " was born! :)"<< std::endl;
};
Pony::~Pony(void)
{
    std::cout << "The pony named " <<this->_Name << " died! :("<< std::endl;
};

void            Pony::setName(std::string str)
{
    this->_Name = str;
    return;
};

void            Pony::setAge(int n)
{
    this->_Age = n;
    return ;
};

void            Pony::setFluffiness(std::string str)
{
    this->_Fluffiness = str;
    return ;
};

void            Pony::setPersonality(std::string str)
{
    this->_Personality = str;
    return ;
};

std::string     Pony::getName(void)
{
    return (this->_Name);
};

int             Pony::getAge(void)
{
    return (this->_Age);
};

std::string     Pony::getFluffiness(void)
{
    return (this->_Fluffiness);
};

std::string     Pony::getPersonality(void)
{
    return (this->_Personality);
};
