/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: valeriiamuradian <valeriiamuradian@stud    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/24 16:30:41 by valeriiamur       #+#    #+#             */
/*   Updated: 2019/10/25 15:28:15 by valeriiamur      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAGTRAP_HPP
# define FRAGTRAP_HPP

#include <string>
#include <iostream>
#include <cstdlib>

class FragTrap
{
    public:

    FragTrap(std::string name);
    FragTrap();
    ~FragTrap();
    // Operators
    FragTrap  &operator=(FragTrap const &rhs);
    // Damage methods
    void          takeDamage(unsigned int amount);
    void          beRepaired(unsigned int amount);
    // Attack methods
    void          meleeAttack(std::string const &target);
    void          rangedAttack(std::string const &target);
    void          vaulthunter_dot_exe(std::string const &target);
    // Get methods
    std::string   getName(void);
    unsigned int  getMeleeAttackDamage(void);
    unsigned int  getRangedAttackDamage(void);
    unsigned int  getArmourDamageReduction(void);
    unsigned int  getVaulHunter_dot_exeDamage(void);
    unsigned int  getDadJokeAttackDamage(void);
    unsigned int  getBoringAttackDamage(void);
    unsigned int  getPlungerAttackDamage(void);
    unsigned int  getFoodAttackDamage(void);
    unsigned int  getLaserAttackDamage(void);

    protected:
    //robot features
    std::string   _name;
    unsigned int  _hitPoints;
    unsigned int  _maxHitPoints;
    unsigned int  _energyPoints;
    unsigned int  _maxEnergyPoints;
    unsigned int  _level;
    unsigned int  _meleeAttackDamagePoints;
    unsigned int  _rangedAttackDamagePoints;
    unsigned int  _armourDamageReductionPoints;
    unsigned int  _vaulhunterDamagePoints;
    unsigned int  _dadJokeAttackDamagePoints;
    unsigned int  _boringAttackDamagePoints;
    unsigned int  _plungerAttackDamagePoints;
    unsigned int  _foodAttackDamagePoints;
    unsigned int  _laserAttackDamagePoints;

    private:

    void          dadJokeAttack(std::string const &target);
    void          boringAttack(std::string const &target);
    void          plungerAttack(std::string const &target);
    void          foodAttack(std::string const &target);
    void          laserAttack(std::string const &target);
};

#endif