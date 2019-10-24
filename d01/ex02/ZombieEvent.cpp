/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieEvent.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: valeriiamuradian <valeriiamuradian@stud    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/22 19:22:37 by valeriiamur       #+#    #+#             */
/*   Updated: 2019/10/23 18:33:19 by valeriiamur      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "ZombieEvent.hpp"
# include "Zombie.hpp"

ZombieEvent::ZombieEvent(void)
{
    return ;
};

ZombieEvent::~ZombieEvent(void)
{
    return ;
};

void ZombieEvent::setZombieType(std::string type)
{
    this->_type = type;
    return;
};

std::string ZombieEvent::getZombieType(void)
{
    return (this->_type);
};

Zombie* ZombieEvent::newZombie(std::string name)
{
    return (new Zombie(name, _type));
};

Zombie *ZombieEvent::randomChump(void)
{
    srand(time(0));  // Initialize random number generator.
    int index;
    std::string names[] = {"Matt", "Ivan", "Vlad", "Oleg", "Kek", "Lol"};
    Zombie *randomZombie;
    int n;

    n = 6;
    index = 0;
    if (this->_type == "")
        this->_type = "random Zombie";
    index = rand() % n;
    randomZombie = this->newZombie(names[index]);
    return randomZombie;
};