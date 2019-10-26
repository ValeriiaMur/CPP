/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: valeriiamuradian <valeriiamuradian@stud    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/08 21:31:44 by jaleman           #+#    #+#             */
/*   Updated: 2019/10/26 13:49:30 by valeriiamur      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

#include "Character.hpp"
#include "PlasmaRifle.hpp"
#include "PowerFist.hpp"
#include "RadScorpion.hpp"

int
main(void)
{
    Character *val = new Character("Valera");
    std::cout << *val;
    Enemy *b = new RadScorpion();
    Enemy *c = new RadScorpion();
    Enemy *d = new RadScorpion();
    AWeapon *pr = new PlasmaRifle();
    AWeapon *pf = new PowerFist();
    
    val->equip(pr);
    std::cout << *val;
    val->equip(pf);
    val->attack(b);
    std::cout << *val;
    val->equip(pr);
    std::cout << *val;
    val->attack(b);
    std::cout << *val;
    val->attack(b);
    std::cout << *val;

    val->attack(c);
    std::cout << *val;
    val->attack(c);
    std::cout << *val;
    val->attack(c);
    std::cout << *val;
    val->attack(c);
    std::cout << *val;
    val->attack(d);
    std::cout << *val;
    val->attack(d);
    std::cout << *val;
    val->attack(d);
    std::cout << *val;

    return (0);
}
