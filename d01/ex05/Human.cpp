/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Human.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: valeriiamuradian <valeriiamuradian@stud    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/23 19:31:14 by valeriiamur       #+#    #+#             */
/*   Updated: 2019/10/23 19:31:22 by valeriiamur      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Human.hpp"

Human::Human(void)
{
    return ;
}
Human::~Human(void)
{
    return ;
}

Brain Human::getBrain(void)
{
    return (this->_brain);
}

std::string Human::identify(void)
{
    return (this->_brain.identify());
}