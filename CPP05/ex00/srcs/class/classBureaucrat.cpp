/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   classBureaucrat.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aguay <aguay@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/04 09:20:11 by aguay             #+#    #+#             */
/*   Updated: 2022/08/05 07:35:27 by aguay            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "classBureaucrat.hpp"

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
	try
	{
		this->_checkGrade(grade);
		this->_name = name;
		this->_grade = grade;
	}
	catch (std::exception &e)
	{
		std::cout << "Can't create " << name << " because " << e.what() << std::endl;
	}
}

Bureaucrat::Bureaucrat(std::string name, int grade)
{
	try
	{
		this->_checkGrade(grade);
		this->_name = name;
		this->_grade = grade;
	}
	catch (std::exception &e)
	{
		std::cout << "Can't create " << name << " because " << e.what() << std::endl;
	}
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
	try
	{
		this->_checkGrade(this->_grade + 1);
		this->_grade++;
	}
	catch (std::exception &e)
	{
		std::cout << "Can't increment " << this->_name << " grade because "
			<< e.what() << std::endl;
	}
}

void	Bureaucrat::decremGrade(void)
{
	try
	{
		this->_checkGrade(this->_grade - 1);
		this->_grade--;
	}
	catch (std::exception &e)
	{
		std::cout << "Can't decrement " << this->_name << " grade because "
			<< e.what() << std::endl;
	}
}

std::string	Bureaucrat::getName(void) const
{
	return (this->_name);
}

size_t	Bureaucrat::getGrade(void) const
{
	return (this->_grade);
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
