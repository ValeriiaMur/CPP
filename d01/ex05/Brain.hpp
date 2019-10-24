/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: valeriiamuradian <valeriiamuradian@stud    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/23 19:21:02 by valeriiamur       #+#    #+#             */
/*   Updated: 2019/10/23 19:32:10 by valeriiamur      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRAIN_HPP
# define BRAIN_HPP

# include <string>
# include <iostream>
# include <sstream>

class Brain
{
    public:

    Brain();
    ~Brain();
    std::string identify();
    void setAddress(void);
    std::string getAddress(void);

    private:

    std::string _address;
};

#endif