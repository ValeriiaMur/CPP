/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieHorde.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: valeriiamuradian <valeriiamuradian@stud    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/23 18:39:30 by valeriiamur       #+#    #+#             */
/*   Updated: 2019/10/23 18:55:14 by valeriiamur      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIEHORDE_HPP
# define ZOMBIEHORDE_HPP

# include <string>
# include <iostream>
# include "Zombie.hpp"
# include "ZombieHorde.hpp"

class ZombieHorde
{
public:
    ZombieHorde(int);
    ZombieHorde();
    ~ZombieHorde(void);
    void        announce(void);
    std::string randomChump(void);

private:
    Zombie      *_zombie;
    int         _number;
};

#endif