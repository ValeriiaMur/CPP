/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: valeriiamuradian <valeriiamuradian@stud    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/25 13:15:52 by valeriiamur       #+#    #+#             */
/*   Updated: 2019/10/25 15:57:24 by valeriiamur      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"

int main(void)
{
    std::cout << "FIGHT!"<< std::endl;
    FragTrap bambl("Bambl");
    ScavTrap groot("Groot");

    std::cout << std::endl << "ROUND 1" << std::endl;
    bambl.meleeAttack(groot.getName());
    groot.takeDamage(bambl.getMeleeAttackDamage());

    std::cout << std::endl << "ROUND 2" << std::endl;
    groot.rangedAttack(bambl.getName());
    bambl.takeDamage(groot.getRangedAttackDamage());

    std::cout << std::endl << "ROUND 3" << std::endl;
    bambl.vaulthunter_dot_exe(groot.getName());
    groot.challengeNewcomer(bambl.getName());
	
    return (0);
}

