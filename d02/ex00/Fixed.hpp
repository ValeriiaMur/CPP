/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: valeriiamuradian <valeriiamuradian@stud    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/24 14:14:11 by valeriiamur       #+#    #+#             */
/*   Updated: 2019/10/24 14:24:56 by valeriiamur      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef FIXED_HPP
# define FIXED_HPP
#include <string>
#include <iostream>

class Fixed
{
    public:
    
    Fixed(void);
    ~Fixed(void);
    Fixed(const Fixed &other);
    Fixed               &operator=(const Fixed &rhs);
    int                 getRawBits(void) const;
    void                setRawBits(int const);

    private:

    int _fixedPointValue;
    static const int _bits;
};

#endif