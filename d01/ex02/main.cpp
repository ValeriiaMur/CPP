/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: valeriiamuradian <valeriiamuradian@stud    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/22 19:15:04 by valeriiamur       #+#    #+#             */
/*   Updated: 2019/10/23 18:16:41 by valeriiamur      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"
#include "ZombieEvent.hpp"

int main(void)
{
    Zombie *one;
    Zombie *two;
    ZombieEvent event;

    event.setZombieType("cheerful zombie");
    one = event.randomChump();
    std::cout << one->announce() <<std::endl;
    delete one;
    event.setZombieType("sad zombie");
    two = event.randomChump();
    std::cout << two->announce() <<std::endl;
    delete one;
    return (0);
    
}