/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ex04.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: valeriiamuradian <valeriiamuradian@stud    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/23 19:04:56 by valeriiamur       #+#    #+#             */
/*   Updated: 2019/10/23 19:19:24 by valeriiamur      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include <iostream>

int     main(void)
{
	std::string string = "HI THIS IS BRAIN";
    // A pointer is a variable that holds memory address of another variable. Needs to be dereferenced with *. A pointer can be re-assigned.
	std::string *ptr = &string;  
    //A reference variable is an alias, that is, another name for an already existing variable. Can't be re-assigned.
	std::string &ref = string;

	std::cout << "this is the pointer '" << *ptr << "'" << std::endl;
	std::cout << "this is the reference '" << ref << "'" << std::endl;

	return 0;
}