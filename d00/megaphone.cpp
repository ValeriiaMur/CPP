/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vmuradia <vmuradia@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/08 17:48:54 by vmuradia          #+#    #+#             */
/*   Updated: 2019/04/08 18:10:42 by vmuradia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <cctype>
#include <iostream>
#include <string>

void megaphone(int argc, char **argv)
{
    for (int i = 1; i < argc; i++)
    {
        for (int j = 0; j < strlen(argv[i]); j++)
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