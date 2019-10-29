/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: valeriiamuradian <valeriiamuradian@stud    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/27 16:54:26 by valeriiamur       #+#    #+#             */
/*   Updated: 2019/10/29 15:08:16 by valeriiamur      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"

static void
checkForm(Bureaucrat bureaucrat, Form format)
{
    try
    {
        bureaucrat.signForm(format);
        std::cout << bureaucrat << std::endl;
        std::cout << format << std::endl;
    }
    catch (std::exception &e)
    {
        std::cout << e.what() << std::endl;
    }
    return ;
}

int
main(void)
{
    Form        f1 = Form("Cool form", 42, 42);
    Form        f2 = Form("Okay form.", 30, 50);
    Bureaucrat  b1 = Bureaucrat("Jimmy", 42);
    Bureaucrat  b2 = Bureaucrat("Ben", 1);

    checkForm(b1, f1);
    std::cout << std::endl;

    checkForm(b1, f2);
    std::cout << std::endl;

    checkForm(b2, f1);
    std::cout << std::endl;

    checkForm(b2, f2);
    std::cout << std::endl;
    return (0);
}