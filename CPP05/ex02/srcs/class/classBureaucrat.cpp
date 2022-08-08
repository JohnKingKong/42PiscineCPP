/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   classBureaucrat.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aguay <aguay@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/04 09:20:11 by aguay             #+#    #+#             */
/*   Updated: 2022/08/05 11:02:47 by aguay            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "classBureaucrat.hpp"
#include "classAForm.hpp"

Bureaucrat::Bureaucrat(void)
{
	std::string	name;
	int			grade;

	std::cout << "What name do you want to give to this Bureaucrat instance?"
		<< std::endl;
	std::getline(std::cin, name);
	std::cout << "What grade do you want to give to this Bureaucrat instance?"
		<< std::endl;
	std::cin >> grade;
	this->_checkGrade(grade);
	this->_name = name;
	this->_grade = grade;
}

Bureaucrat::Bureaucrat(std::string name, int grade)
{
	this->_checkGrade(grade);
	this->_name = name;
	this->_grade = grade;
}

Bureaucrat::Bureaucrat(Bureaucrat const & rhs)
{
	*this = rhs;
}

Bureaucrat::~Bureaucrat(void)
{
	return;
}

Bureaucrat & Bureaucrat::operator=(Bureaucrat const & rhs)
{
	if (this != &rhs)
	{
		this->_grade = rhs.getGrade();
		this->_name = rhs.getName();
	}
	return (*this);
}

void	Bureaucrat::incremGrade(void)
{
	this->_checkGrade(this->_grade + 1);
	this->_grade++;
}

void	Bureaucrat::decremGrade(void)
{
	this->_checkGrade(this->_grade - 1);
	this->_grade--;
}

std::string	Bureaucrat::getName(void) const
{
	return (this->_name);
}

int	Bureaucrat::getGrade(void) const
{
	return (this->_grade);
}

void	Bureaucrat::signForm(AForm & form)
{
		form.beSigned(*this);
		std::cout << this->_name << " signed " << form.getName() << std::endl;
}

void	Bureaucrat::executeForm(const AForm& form) const
{
	form.execute(*this);
	std::cout << this->_name << " executed " << form.getName() << std::endl;
}

std::ostream&	operator<<(std::ostream& COUT, const Bureaucrat& rhs)
{
	COUT << rhs.getName() << ", bureaucrat grade " << rhs.getGrade();
	return (COUT);
}

void	Bureaucrat::_checkGrade(int grade) const
{
	if (grade < 1)
		throw GradeTooHighException();
	else if (grade > 150)
		throw GradeTooLowException();
}

const char* Bureaucrat::GradeTooHighException::what() const throw()
{
	return ("\033[31mGrade to high (maximum 1)\033[0m");
}

const char* Bureaucrat::GradeTooLowException::what() const throw()
{
	return ("\033[31mGrade to low (minimum 150)\033[0m");
}
