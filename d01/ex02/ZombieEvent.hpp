/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieEvent.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: valeriiamuradian <valeriiamuradian@stud    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/22 19:22:35 by valeriiamur       #+#    #+#             */
/*   Updated: 2019/10/23 18:32:28 by valeriiamur      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIEEVENT_HPP
#define ZOMBIEEVENT_HPP

# include <iostream>
# include <ctime>    // For time()
# include <cstdlib> //for rand
# include <string>
# include "Zombie.hpp"

class ZombieEvent
{
    private:

    std::string _type;

    public:
    ZombieEvent();
    ~ZombieEvent();
    Zombie *newZombie(std::string);
    void setZombieType(std::string);
    std::string getZombieType(void);
    Zombie *randomChump(void);

};

#endif // !ZOMBIEEVENT_HPP