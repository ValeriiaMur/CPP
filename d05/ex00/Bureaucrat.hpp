/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: valeriiamuradian <valeriiamuradian@stud    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/27 12:11:39 by valeriiamur       #+#    #+#             */
/*   Updated: 2019/10/28 19:31:34 by valeriiamur      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP

#include <iostream>
#include <string>
#include <exception>

# define MIN_GRADE 1
# define MAX_GRADE 150

class Bureaucrat
{
    private:
        std::string _name;
        int _grade;

    public:
    /*
		 *	GradeTooHighException class
		 */
        class GradeTooHighException : public std::exception
		{
			public:
				GradeTooHighException(void);
				GradeTooHighException(const GradeTooHighException &src);
				virtual ~GradeTooHighException(void) throw();

				GradeTooHighException &operator= (const GradeTooHighException &obj);

				virtual const char	*what() const throw();
		};

		/*
		 *	GradeTooLowException class
		 */
		class GradeTooLowException : public std::exception
		{
			public:
				GradeTooLowException(void);
				GradeTooLowException(const GradeTooLowException &src);
				virtual ~GradeTooLowException(void) throw();

				GradeTooLowException &operator= (const GradeTooLowException &obj);

				virtual const char	*what() const throw();
		};



        Bureaucrat(std::string, int);
        Bureaucrat(const Bureaucrat &src);
        ~Bureaucrat();
        std::string getName(void) const;
        int getGrade(void) const;
        void setName(std::string);
        void setGrade(int);
        Bureaucrat &operator= (const Bureaucrat &rhs);
        void					incGrade(void);
		void					decGrade(void);
};

std::ostream         &operator<< (std::ostream &out, const Bureaucrat &rhs);

#endif // !BUREAUCRAT_HPP
