/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Peon.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: valeriiamuradian <valeriiamuradian@stud    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/26 10:08:57 by valeriiamur       #+#    #+#             */
/*   Updated: 2019/10/26 10:39:36 by valeriiamur      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PEON_HPP
# define PEON_HPP

#include <iostream>
#include <string>
#include "Victim.hpp"

class Peon : public Victim
{
    public:

        Peon();
        Peon(const Peon &src);
        Peon(std::string name);
        ~Peon();
        Peon        &operator= (const Peon &rhs);
        void        getPolymorphed(void) const;

    private:
        std::string _name;

};

#endif