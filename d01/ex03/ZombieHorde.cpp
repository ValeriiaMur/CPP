/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: valeriiamuradian <valeriiamuradian@stud    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/23 18:39:17 by valeriiamur       #+#    #+#             */
/*   Updated: 2019/10/23 19:02:44 by valeriiamur      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"
#include "ZombieHorde.hpp"

ZombieHorde::ZombieHorde(int n): _number(n)
{
    this->_zombie = new Zombie[n];

    for (int i = 0; i < this->_number; i += 1)
    {
        this->_zombie[i].setType("Horde");
        this->_zombie[i].setName(this->randomChump());
    }
    std::cout << n << " zombies were created" << std::endl;
    return ;
}

ZombieHorde::ZombieHorde(void)
{
    return ;
}

ZombieHorde::~ZombieHorde(void)
{
    delete [] _zombie;
	std::cout << "Zombie horde died! Yay!" << std::endl;
    return ;
}

std::string ZombieHorde::randomChump(void)
{
    int     index;
    int     names_nbr;
    std::string names[] = {"Matt", "Ivan", "Vlad", "Oleg", "Kek", "Lol"};

    names_nbr = 6;
    index = rand() % names_nbr;
    return (names[index]);
}

void
ZombieHorde::announce(void)
{
    for (int i = 0; i < this->_number; i += 1)
    {
        std::cout << this->_zombie[i].announce() << std::endl;
    }
    return ;
}