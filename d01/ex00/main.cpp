/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: valeriiamuradian <valeriiamuradian@stud    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/22 17:41:13 by valeriiamur       #+#    #+#             */
/*   Updated: 2019/10/22 18:43:31 by valeriiamur      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Pony.hpp"

Pony ponyOnTheStack()
{
    Pony Baby = Pony("Baby");

    std::cout << "This is a pony. Her name is "<< Baby.getName() <<std::endl;
    Baby.setAge(1);
    std::cout << "She is only " << Baby.getAge() << " year old!" <<std::endl;
    Baby.setFluffiness("very fluffy");
    std::cout << "Her level of fluffiness is: " << Baby.getFluffiness() <<std::endl;
    Baby.setPersonality("kind and nice");
    std::cout << "Her personality is: " << Baby.getPersonality() <<std::endl;
    return (Baby);
}

static void ponyOnTheHeap()
{
    Pony *Ponchik = new Pony("Ponchik");

    std::cout << "This is a pony. Her name is "<< Ponchik->getName() <<std::endl;
    Ponchik->setAge(6);
    std::cout << "She is " << Ponchik->getAge() << " years old!" <<std::endl;
    Ponchik->setFluffiness("well, kinda fluffy");
    std::cout << "Her lever of fluffiness is: " << Ponchik->getFluffiness() <<std::endl;
    Ponchik->setPersonality("lazy and bored");
    std::cout << "Her personality is: " << Ponchik->getPersonality() <<std::endl;
}

int main(void)
{
    std::cout << "~*~ Welcome the pony on the stack ~*~" <<std::endl;
    Pony pony1 = ponyOnTheStack();
    std::cout << "~*~ Wait for the second pony...She is coming... ~*~" <<std::endl;
    std::cout << "~*~ This is the pony on the heap! ~*~" <<std::endl;
    ponyOnTheHeap();
    std::cout << "~*~ THE END ~*~" <<std::endl;
    return (0);
}