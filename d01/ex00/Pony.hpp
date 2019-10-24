/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Pony.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: valeriiamuradian <valeriiamuradian@stud    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/22 17:02:33 by valeriiamur       #+#    #+#             */
/*   Updated: 2019/10/22 18:28:54 by valeriiamur      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PONY_HPP
# define PONY_HPP

# include <iostream>

class Pony
{
public:

    Pony(std::string Name);
    ~Pony(void);
    void            setName(std::string);
    void            setAge(int);
    void            setFluffiness(std::string);
    void            setPersonality(std::string);
    std::string     getName(void);
    int             getAge(void);
    std::string     getFluffiness(void);
    std::string     getPersonality(void);

private:

    int _Age;
    std::string _Fluffiness;
    std::string _Personality;
    std::string _Name;
};

static void  ponyOnTheHeap();
Pony         ponyOnTheStack();

#endif 