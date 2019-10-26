/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Sorcerer.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: valeriiamuradian <valeriiamuradian@stud    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/25 18:27:07 by valeriiamur       #+#    #+#             */
/*   Updated: 2019/10/26 10:18:22 by valeriiamur      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SORCERER_HPP
# define SORCERER_HPP

#include <iostream>
#include <string>
#include "Victim.hpp"

class Sorcerer
{
    public:
        Sorcerer(std::string name, std::string title);
        Sorcerer();
        ~Sorcerer();
        std::string getName() const;
        std::string getTitle() const;
        void setName(std::string str);
        void setTitle(std::string str);
        Sorcerer     &operator= (const Sorcerer &rhs);
        void polymorph(const Victim &victim) const;


    private:
        std::string _name;
        std::string _title;
};

std::ostream         &operator<< (std::ostream &out, const Sorcerer &rhs);

#endif