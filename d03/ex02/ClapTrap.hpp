/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: valeriiamuradian <valeriiamuradian@stud    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/25 15:31:47 by valeriiamur       #+#    #+#             */
/*   Updated: 2019/10/25 15:48:52 by valeriiamur      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP

#include <string>
#include <iostream>
#include <cstdlib>

class ClapTrap
{
public:
    // Constructors and destructors
	ClapTrap(void);
	ClapTrap(std::string name);
	~ClapTrap(void);
	// Operators
	ClapTrap  &operator=(ClapTrap const &rhs);
	// Damage methods
    void          takeDamage(unsigned int amount);
    void          beRepaired(unsigned int amount);
	void          meleeAttack(std::string const &target);
    void          rangedAttack(std::string const &target);
	// Set methods
	void 		setName(std::string name);
	void 		setLevel(unsigned int level);
	// Get methods
	std::string   getName(void);
    unsigned int  gethitPoints(void);
    unsigned int  getmaxHitPoints(void);
    unsigned int  getenergyPoints(void);
    unsigned int  getmaxEnergyPoints(void);
    unsigned int  getlevel(void);
	unsigned int  getMeleeAttackDamage(void);
	unsigned int  getRangedAttackDamage(void);
	unsigned int  getArmourDamageReduction(void);

protected:
	// Player attributes
    std::string   _name;
    unsigned int  _hitPoints;
    unsigned int  _maxHitPoints;
    unsigned int  _energyPoints;
    unsigned int  _maxEnergyPoints;
    unsigned int  _level;
	// Damage points
	unsigned int  _meleeAttackDamagePoints;
	unsigned int  _rangedAttackDamagePoints;
	unsigned int  _armourDamageReductionPoints;
};

#endif