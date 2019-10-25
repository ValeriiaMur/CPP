/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: valeriiamuradian <valeriiamuradian@stud    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/24 16:37:42 by valeriiamur       #+#    #+#             */
/*   Updated: 2019/10/25 15:29:12 by valeriiamur      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap()
{
    return ;
};

FragTrap::~FragTrap()
{
    std::cout << "Well. " << this->_name << " dies" << std::endl;
    return ;
};

FragTrap::FragTrap(std::string name) : _name(name)
{
    std::cout << "I'm alive! They call me " << this->_name << std::endl;
    this->_hitPoints = 100;
    this->_maxHitPoints = 100;
    this->_energyPoints = 100;
    this->_maxEnergyPoints = 100;
    this->_level = 1;
    this->_meleeAttackDamagePoints = 30;
    this->_rangedAttackDamagePoints = 20;
    this->_armourDamageReductionPoints = 5;
    this->_vaulhunterDamagePoints = 0;
    this->_dadJokeAttackDamagePoints = 9001;
    this->_boringAttackDamagePoints = 5;
    this->_plungerAttackDamagePoints = 420;
    this->_foodAttackDamagePoints = 69;
    this->_laserAttackDamagePoints = 42;
    return ;
}

FragTrap &FragTrap::operator= (FragTrap const &rhs)
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
	this->_vaulhunterDamagePoints = rhs._vaulhunterDamagePoints;
	this->_dadJokeAttackDamagePoints = rhs._dadJokeAttackDamagePoints;
	this->_boringAttackDamagePoints = rhs._boringAttackDamagePoints;
	this->_plungerAttackDamagePoints = rhs._plungerAttackDamagePoints;
	this->_foodAttackDamagePoints = rhs._foodAttackDamagePoints;
	this->_laserAttackDamagePoints = rhs._laserAttackDamagePoints;
    return (*this);
}

/*
** Attacks
*/

void
FragTrap::meleeAttack(std::string const &target)
{
    std::cout << "FR4G-TP " << this->_name << " attacks " << target << " with melee (whatever it means), causing " << this->_meleeAttackDamagePoints \
              << " points of damage !" << std::endl;
    return ;
}

void
FragTrap::rangedAttack(std::string const &target)
{
    std::cout << "FR4G-TP named " << this->_name << " does range attacks at " << target << " causing " << this->_rangedAttackDamagePoints \
              << " points of damage! Wow!" << std::endl;
    return ;
}

void
FragTrap::takeDamage(unsigned int amount)
{
    unsigned int    damage;

    damage = amount - this->_armourDamageReductionPoints;
    if (damage > this->_hitPoints)
    {
        this->_hitPoints = 0;
        std::cout << this->_name << ": Well stop. I'm dead already... X_X" << std::endl;
    }
    else
    {
        this->_hitPoints -= damage;
        std::cout << this->_name << " is still alive." << std::endl;
        std::cout << "Armour reduction: " << this->_armourDamageReductionPoints\
                  << std::endl;
        std::cout << "Damage taken: " << damage << std::endl;
        std::cout << "HP left: " << this->_hitPoints << " / " \
                  << this->_maxHitPoints << std::endl;
    }
    return ;
}

void
FragTrap::beRepaired(unsigned int amount)
{
    if (this->_energyPoints < amount)
    {
        std::cout << this->_name << ": Not enough energy!" << std::endl;
    }
    else
    {
        this->_energyPoints -= amount;
        this->_hitPoints = amount + this->_hitPoints;
        std::cout << this->_name << ": I'm feeling better now!" << std::endl;
        std::cout << "HP points: " << this->_hitPoints << std::endl;
    }
    std::cout << "Energy points left: " << this->_energyPoints << std::endl;
    return ;
}

void
FragTrap::vaulthunter_dot_exe(std::string const &target)
{
  int   random;

  if (this->_energyPoints < 25)
  {
        std::cout << this->_name << " needs more energy... >.<" << std::endl;
        std::cout << "Energy points needed: " << 25 - this->_energyPoints \
                  << std::endl;
  }
  else
  {
        this->_energyPoints -= 25;
        srand(time(NULL));
        random = rand() % 5;
        if (random == 0)
            FragTrap::dadJokeAttack(target);
        else if (random == 1)
            FragTrap::boringAttack(target);
        else if (random == 2)
            FragTrap::plungerAttack(target);
        else if (random == 3)
            FragTrap::foodAttack(target);
        else
            FragTrap::laserAttack(target);
  }
  return ;
}

void FragTrap::dadJokeAttack(std::string const &target)
{
    this->_vaulhunterDamagePoints = this->_dadJokeAttackDamagePoints;
    std::cout << "FR4G-TP " << this->_name << " starts attacking with dad jokes " << target \
              << " causing " << this->_dadJokeAttackDamagePoints \
              << " points of damage !" << std::endl;
    return ;
}

void FragTrap::boringAttack(std::string const &target)
{
    this->_vaulhunterDamagePoints = this->_boringAttackDamagePoints;
    std::cout << "FR4G-TP " << this->_name << " attacks " << target \
              << " with a long boring story, causing " << this->_boringAttackDamagePoints \
              << " points of damage ! Ugh." << std::endl;
    return ;
}

void
FragTrap::plungerAttack(std::string const &target)
{
    this->_vaulhunterDamagePoints = this->_plungerAttackDamagePoints;
    std::cout << "FR4G-TP " << this->_name << " attacks " << target \
              << " with a big scary plunger, causing " << this->_plungerAttackDamagePoints \
              << " points of damage !" << std::endl;
    return ;
}

void
FragTrap::foodAttack(std::string const &target)
{
    this->_vaulhunterDamagePoints = this->_foodAttackDamagePoints;
    std::cout << "FR4G-TP " << this->_name << " attacks " << target \
              << " with yummy food, causing " << this->_foodAttackDamagePoints \
              << " points of damage !" << std::endl;
    return ;
}

void
FragTrap::laserAttack(std::string const &target)
{
    this->_vaulhunterDamagePoints = this->_laserAttackDamagePoints;
    std::cout << "FR4G-TP " << this->_name << " attacks " << target \
              << " with a laser, causing " << this->_laserAttackDamagePoints \
              << " points of damage !" << std::endl;
    return ;
}

/*
** Get methods
*/

std::string
FragTrap::getName(void)
{
    return (this->_name);
}

unsigned int
FragTrap::getMeleeAttackDamage(void)
{
    return (this->_meleeAttackDamagePoints);
}

unsigned int
FragTrap::getRangedAttackDamage(void)
{
    return (this->_rangedAttackDamagePoints);
}

unsigned int
FragTrap::getArmourDamageReduction(void)
{
    return (this->_armourDamageReductionPoints);
}

unsigned int
FragTrap::getVaulHunter_dot_exeDamage(void)
{
    return (this->_vaulhunterDamagePoints);
}

unsigned int
FragTrap::getDadJokeAttackDamage(void)
{
    return (this->_dadJokeAttackDamagePoints);
}

unsigned int
FragTrap::getBoringAttackDamage(void)
{
    return (this->_boringAttackDamagePoints);
}

unsigned int
FragTrap::getPlungerAttackDamage(void)
{
    return (this->_plungerAttackDamagePoints);
}

unsigned int
FragTrap::getFoodAttackDamage(void)
{
    return (this->_foodAttackDamagePoints);
}

unsigned int
FragTrap::getLaserAttackDamage(void)
{
    return (this->_laserAttackDamagePoints);
}