/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: valeriiamuradian <valeriiamuradian@stud    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/23 18:44:50 by valeriiamur       #+#    #+#             */
/*   Updated: 2019/10/23 19:03:38 by valeriiamur      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ZombieHorde.hpp"
#include "Zombie.hpp"

int main(void)
{
    ZombieHorde first = ZombieHorde(5);
    ZombieHorde second = ZombieHorde(0);
    first.announce();
    second.announce();
    return (0);
}