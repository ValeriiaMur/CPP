/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ex01.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: valeriiamuradian <valeriiamuradian@stud    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/22 18:46:40 by valeriiamur       #+#    #+#             */
/*   Updated: 2019/10/22 18:47:35 by valeriiamur      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include <iostream>

void memoryLeak()
{
    std::string* panthere = new std::string("String panthere");
    std::cout << *panthere << std::endl;
    delete panthere;
}