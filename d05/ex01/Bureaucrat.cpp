/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: valeriiamuradian <valeriiamuradian@stud    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/27 12:18:20 by valeriiamur       #+#    #+#             */
/*   Updated: 2019/10/29 15:10:18 by valeriiamur      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"

Bureaucrat::Bureaucrat(std::string name, int grade) : _name(name), _grade(grade)
{
    if (grade < 1)
		throw Bureaucrat::GradeTooHighException();
	else if (grade > 150)
		throw Bureaucrat::GradeTooLowException();
	this->_grade = grade;
    return;
}

Bureaucrat::~Bureaucrat()
{
    return;
}

std::string Bureaucrat::getName(void) const
{
    return (this->_name);
};

int Bureaucrat::getGrade(void) const
{
    return (this->_grade);
};

void
Bureaucrat::setName(std::string name)
{
	this->_name = name;
}


void
Bureaucrat::setGrade(int grade)
{
	this->_grade = grade;
}

Bureaucrat &Bureaucrat::operator= (const Bureaucrat &rhs)
{
    if (this != &rhs)
    {
      this->_name = rhs._name;
      this->_grade = rhs._grade;
    }
    return (*this);
}

Bureaucrat::Bureaucrat(const Bureaucrat &src)
{
    *this = src;
    return ;
}


std::ostream &operator<< (std::ostream &out, const Bureaucrat &rhs)
{
    out << rhs.getName() << ", bureaucrat grade " << rhs.getGrade() << std::endl;
    return (out);
}

void
Bureaucrat::incGrade(void)
{
	if (this->_grade == 1)
		throw Bureaucrat::GradeTooHighException();
	this->_grade--;
}

void
Bureaucrat::decGrade(void)
{
	if (this->_grade == 150)
		throw Bureaucrat::GradeTooLowException();
	this->_grade++;
}

Bureaucrat::
GradeTooHighException::GradeTooHighException(void) {}

Bureaucrat::
GradeTooHighException::GradeTooHighException(const GradeTooHighException &src)
{
	*this = src;
}

Bureaucrat::
GradeTooHighException::~GradeTooHighException(void) throw() {}

Bureaucrat::GradeTooHighException
&Bureaucrat::GradeTooHighException::operator= (const GradeTooHighException &rhs)
{
    (void)rhs;
    return (*this);
}

const char
*Bureaucrat::
GradeTooHighException::what() const throw()
{
	return ("Grade too high");
}

/*
 *	GradeTooLowException
 */

Bureaucrat::
GradeTooLowException::GradeTooLowException(void) {}

Bureaucrat::
GradeTooLowException::GradeTooLowException(const GradeTooLowException &src)
{
	*this = src;
}

Bureaucrat::
GradeTooLowException::~GradeTooLowException(void) throw() {}

Bureaucrat::GradeTooLowException
&Bureaucrat::GradeTooLowException::operator= (const GradeTooLowException &rhs)
{
    (void)rhs;
    return (*this);
}

const char
*Bureaucrat::
GradeTooLowException::what() const throw()
{
	return ("Grade too low");
}

void
Bureaucrat::signForm(Form &form)
{
    try
    {
        form.beSigned(*this);
        std::cout << this->_name << " signs " << form.getName() << std::endl;
    }
    catch (std::exception& e)
    {
        std::cout << this->_name << " cannot sign " << form.getName()
                  << " because " << e.what() << std::endl;
    }
    return ;
}