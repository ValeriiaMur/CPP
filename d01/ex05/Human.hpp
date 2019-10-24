/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Human.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: valeriiamuradian <valeriiamuradian@stud    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/23 19:29:36 by valeriiamur       #+#    #+#             */
/*   Updated: 2019/10/23 19:31:00 by valeriiamur      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMAN_HPP
# define HUMAN_HPP
# include "Brain.hpp"

class Human
{
    public:
    Human(void);
    ~Human(void);
    Brain getBrain(void);
    std::string identify(void);

private:
    Brain _brain;
};

#endif