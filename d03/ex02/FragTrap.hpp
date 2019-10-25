/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: valeriiamuradian <valeriiamuradian@stud    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/24 16:30:41 by valeriiamur       #+#    #+#             */
/*   Updated: 2019/10/25 15:55:52 by valeriiamur      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAGTRAP_HPP
# define FRAGTRAP_HPP

#include <string>
#include <iostream>
#include <cstdlib>
#include "ClapTrap.hpp"

class FragTrap : public ClapTrap
{
    public:

    FragTrap(std::string name);
    FragTrap();
    ~FragTrap();
    // // Operators
    FragTrap  &operator=(FragTrap const &rhs);
    void          vaulthunter_dot_exe(std::string const &target);
    // // Get methods
    unsigned int  getVaulHunter_dot_exeDamage(void);
    unsigned int  getDadJokeAttackDamage(void);
    unsigned int  getBoringAttackDamage(void);
    unsigned int  getPlungerAttackDamage(void);
    unsigned int  getFoodAttackDamage(void);
    unsigned int  getLaserAttackDamage(void);

    protected:
    //robot features
    // std::string   _name;
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