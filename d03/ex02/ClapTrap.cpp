/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: valeriiamuradian <valeriiamuradian@stud    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/25 15:31:44 by valeriiamur       #+#    #+#             */
/*   Updated: 2019/10/25 16:41:55 by valeriiamur      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "ClapTrap.hpp"

ClapTrap::ClapTrap()
{
    std::cout << " Clap Trap is in the house... *clap clap*" << std::endl;
    return ;
};

ClapTrap::ClapTrap(std::string name)
{
	std::cout << name << " is in the house... *clap clap*" << std::endl;
	this->_name = name;
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

ClapTrap::~ClapTrap()
{
    std::cout << "ClapTrap " << this->_name << " dies" << std::endl;
    return ;
};

static void
attackMessage(std::string name, std::string const &target, int damage_points, \
                std::string msg)
{
    std::cout << "CL4P-TP " << name << " strikes " << target << msg \
              << damage_points << " points of damage !" << std::endl;
}

ClapTrap
&ClapTrap::operator= (ClapTrap const &rhs)
{
	this->_name = rhs._name;
	this->_hitPoints = rhs._hitPoints;
	this->_maxHitPoints = rhs._maxHitPoints;
	this->_energyPoints = rhs._energyPoints;
	this->_maxEnergyPoints = rhs._maxEnergyPoints;
	this->_level = rhs._level;
	this->_meleeAttackDamagePoints = rhs._meleeAttackDamagePoints;
	this->_rangedAttackDamagePoints = rhs._rangedAttackDamagePoints;
	this->_armourDamageReductionPoints = rhs._armourDamageReductionPoints;
    return (*this);
}

/*
** Damage calculations
*/

void
ClapTrap::takeDamage(unsigned int amount)
{
    unsigned int    damage;

    damage = amount - this->_armourDamageReductionPoints;
    if (damage > this->_hitPoints)
    {
        this->_hitPoints = 0;
        std::cout << this->_name << ": LOL I'm ded already... X_X" << std::endl;
    }
    else
    {
        this->_hitPoints -= damage;
        std::cout << this->_name << ": I'm still alive. :D" << std::endl;
        std::cout << "Armour reduction: " << this->_armourDamageReductionPoints\
                  << std::endl;
        std::cout << "Damage taken: " << damage << std::endl;
        std::cout << "HP left: " << this->_hitPoints << " / " \
                  << this->_maxHitPoints << std::endl;
    }
    return ;
}

void
ClapTrap::beRepaired(unsigned int amount)
{
    if (this->_energyPoints < amount)
    {
        std::cout << this->_name << ": Not enough energy... :(" << std::endl;
    }
    else
    {
        this->_energyPoints -= amount;
        this->_hitPoints = amount + this->_hitPoints;
        std::cout << this->_name << ": I'm healing myself... ;)" << std::endl;
        std::cout << "HP points: " << this->_hitPoints << std::endl;
    }
    std::cout << "Energy points left: " << this->_energyPoints << std::endl;
    return ;
}


/*
** Attacks
*/

void          ClapTrap::meleeAttack(std::string const &target)
{
	attackMessage(this->_name, target, this->_meleeAttackDamagePoints,
        " with a bat, making ");
    return ;
}
void          ClapTrap::rangedAttack(std::string const &target)
{
	attackMessage(this->_name, target, this->_meleeAttackDamagePoints,
        " with spit, making ");
    return ;
}

/*
** Get methods
*/

std::string
ClapTrap::getName(void)
{
    return (this->_name);
}

unsigned int
ClapTrap::getMeleeAttackDamage(void)
{
    return (this->_meleeAttackDamagePoints);
}

unsigned int
ClapTrap::getRangedAttackDamage(void)
{
    return (this->_rangedAttackDamagePoints);
}