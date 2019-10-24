/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: valeriiamuradian <valeriiamuradian@stud    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/22 18:48:38 by valeriiamur       #+#    #+#             */
/*   Updated: 2019/10/23 18:32:52 by valeriiamur      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

# include <iostream>
# include <string>

class Zombie
{
    private:

    std::string _type;
    std::string _name;

    public:

    Zombie(std::string, std::string);
    ~Zombie();
    std::string announce();
};

#endif // !ZOMBIE_HPP