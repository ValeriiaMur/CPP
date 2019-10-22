/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: valeriiamuradian <valeriiamuradian@stud    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/19 13:05:11 by valeriiamur       #+#    #+#             */
/*   Updated: 2019/10/19 13:19:29 by valeriiamur      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <cctype>
#include <iostream>
#include <string>

void megaphone(int argc, char **argv)
{
    for (int i = 1; i < argc; i++)
    {
        for (size_t j = 0; j < strlen(argv[i]); j++)
        {
            std::cout << (char)toupper(argv[i][j]);
        }
    }
}

int main(int argc, char **argv)
{
    if (argc > 1)
    {
        megaphone(argc, argv);
    }
    else
    {
        std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *";
    }
}
