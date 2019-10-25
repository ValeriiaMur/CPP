/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: valeriiamuradian <valeriiamuradian@stud    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/25 10:36:26 by valeriiamur       #+#    #+#             */
/*   Updated: 2019/10/25 15:53:01 by valeriiamur      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVTRAP_HPP
# define SCAVTRAP_HPP

#include "ClapTrap.hpp"

class ScavTrap : public ClapTrap
{
    public:

    ScavTrap(std::string name);
    ScavTrap();
    ~ScavTrap();
    void          meleeAttack(std::string const &target);
    void          rangedAttack(std::string const &target);
    void          challengeNewcomer(std::string const &target);

    private:
    std::string _challenge;

};

#endif