/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: valeriiamuradian <valeriiamuradian@stud    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/25 10:40:15 by valeriiamur       #+#    #+#             */
/*   Updated: 2019/10/25 15:23:23 by valeriiamur      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap(std::string name)
{
    this->_name = name;
    std::cout << "I was born! My name is " << this->_name << std::endl;
    this->_hitPoints = 100;
    this->_maxHitPoints = 100;
    this->_energyPoints = 50;
    this->_maxEnergyPoints = 50;
    this->_level = 1;
    this->_meleeAttackDamagePoints = 20;
    this->_rangedAttackDamagePoints = 15;
    this->_armourDamageReductionPoints = 3;
    return ;
};

ScavTrap::~ScavTrap()
{
    std::cout << "Poor ScavTrap died. His name was " << this->_name << std::endl;
    return ;
};

ScavTrap::ScavTrap()
{
    return ;
};

void ScavTrap::meleeAttack(std::string const &target)
{
    std::cout << "Scav Trapchik " << this->_name << " attacks " << target << " with melee, causing " << this->_meleeAttackDamagePoints \
              << " points of damage ! Yay!" << std::endl;
    return ;
}

void ScavTrap::rangedAttack(std::string const &target)
{
    std::cout << "Scav Trap " << this->_name << " is range attacking " << target << " causing " << this->_rangedAttackDamagePoints \
              << " points of damage! Wow!" << std::endl;
    return ;
}

void
ScavTrap::challengeNewcomer(std::string const &target)
{
	int         random;
    std::string challenges[] =
    {
        "you'll have to learn cpp",
        "surive the piscine",
        "find a job with 0 years of experience",
        "code in vim",
        "write extremely long headers"
    };

    srand(time(NULL));
    random = rand() % 5;
	this->_challenge = challenges[random];
    std::cout << this->_name << ": I challenge you to " << this->_challenge \
              << " right now! Good luck, have fun, " << target \
              <<  "... HAHAHA :D" << std::endl;
    return ;
}

