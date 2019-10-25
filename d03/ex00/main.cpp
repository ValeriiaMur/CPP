/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: valeriiamuradian <valeriiamuradian@stud    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/25 10:20:03 by valeriiamur       #+#    #+#             */
/*   Updated: 2019/10/25 15:20:23 by valeriiamur      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

int main(void)
{
    std::cout << "Fight!"<< std::endl;
    FragTrap    babality("Babality");
    FragTrap    groot("Groot");

    std::cout << std::endl << "ROUND 1" << std::endl;
    babality.meleeAttack(groot.getName());
    groot.takeDamage(babality.getMeleeAttackDamage());

    std::cout << std::endl << "ROUND 2" << std::endl;
    groot.rangedAttack(babality.getName());
    babality.takeDamage(groot.getRangedAttackDamage());

    std::cout << std::endl << "ROUND 3" << std::endl;
    babality.vaulthunter_dot_exe(groot.getName());
    groot.takeDamage(babality.getVaulHunter_dot_exeDamage());
	
    return (0);
}