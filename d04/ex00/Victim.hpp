/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Victim.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: valeriiamuradian <valeriiamuradian@stud    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/26 09:53:34 by valeriiamur       #+#    #+#             */
/*   Updated: 2019/10/26 10:39:13 by valeriiamur      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef VICTIM_HPP
# define VICTIM_HPP

#include <iostream>
#include <string>

class Victim
{
    public:
        // Constructors
        Victim(void);
        Victim(const Victim &src);
        Victim(std::string name);
        ~Victim(void);
        Victim        &operator= (const Victim &rhs);
        void          setName(std::string name);
        std::string   getName(void) const;
        virtual void          getPolymorphed(void) const;

    private:
        std::string   _name;
};

std::ostream          &operator<< (std::ostream &out, const Victim &rhs);

#endif