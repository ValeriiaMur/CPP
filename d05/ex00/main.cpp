/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: valeriiamuradian <valeriiamuradian@stud    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/27 16:54:26 by valeriiamur       #+#    #+#             */
/*   Updated: 2019/10/28 19:38:31 by valeriiamur      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

static void
checkBureaucrat(Bureaucrat test, int min, int max)
{
	try
	{
		for(int i = min; i <= max; i++)
		{
			// test.incGrade();
			test.decGrade();
			std::cout << test << std::endl;
		}
	}
	catch (std::exception & e)
	{
		std::cout << test;
		std::cout << e.what() << std::endl;
	}
	return ;
}

int
main(void)
{
	Bureaucrat  test("Jimmy", 100);

	std::cout << "Initial Grade: " << test.getGrade() << std::endl;
	std::cout << "Name: " << test.getName() << std::endl;
	checkBureaucrat(test, 0, 5);
	return (0);
}