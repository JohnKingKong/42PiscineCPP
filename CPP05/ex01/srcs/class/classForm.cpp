/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   classForm.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aguay <aguay@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/04 17:22:20 by aguay             #+#    #+#             */
/*   Updated: 2022/08/05 07:49:55 by aguay            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "classForm.hpp"
#include "classBureaucrat.hpp"

Form::Form(void)
{
	return ;
}

Form::Form(std::string name, int gradeToSign, int gradeToExecute) : _name(name),
	_signed(false), _gradeToSign(gradeToSign), _gradeToExecute(gradeToExecute){}

Form::Form(Form const & rhs)
{
	*this = rhs;
}

Form::~Form(void)
{
	return ;
}

Form &	Form::operator=(Form const & rhs)
{
	if (this != &rhs)
	{
		this->_gradeToExecute = rhs.getGradeToExecute();
		this->_gradeToSign = rhs.getGradeToSign();
		this->_signed = rhs.getSigned();
	}
	return (*this);
}

std::string	Form::getName(void) const
{
	return (this->_name);
}

bool	Form::getSigned(void) const
{
	return (this->_signed);
}

int	Form::getGradeToSign(void) const
{
	return (this->_gradeToSign);
}

int	Form::getGradeToExecute(void) const
{
	return (this->_gradeToExecute);
}

void	Form::beSigned(const Bureaucrat & rhs)
{
	this->checkGradeSign(rhs);
	this->_signed = true;
}

void	Form::checkGradeSign(Bureaucrat const & rhs)
{
	if (rhs.getGrade() > this->getGradeToSign())
		throw (Form::GradeTooLowException());
}

void	Form::checkGradeExec(Bureaucrat const & rhs)
{
	if (rhs.getGrade() > this->getGradeToExecute())
		throw (Form::GradeTooLowException());
}

std::ostream&	operator<<(std::ostream& COUT, const Form& rhs)
{
	COUT << rhs.getName() << ", form grade to sign " << rhs.getGradeToSign()
		<< ", form grade to execute " << rhs.getGradeToExecute() << std::endl;
	return (COUT);
}

const char	*Form::GradeToHighException::what() const throw()
{
	return ("\033[31mGrade to high (maximum 1)\033[0m");
}

const char	*Form::GradeTooLowException::what() const throw()
{
	return ("\033[31mGrade to low (minimum 150)\033[0m");
}
