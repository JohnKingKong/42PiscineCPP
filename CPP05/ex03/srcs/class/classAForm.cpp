/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   classAForm.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aguay <aguay@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/04 17:22:20 by aguay             #+#    #+#             */
/*   Updated: 2022/08/05 11:12:34 by aguay            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "classAForm.hpp"
#include "classBureaucrat.hpp"

AForm::AForm(void){}

AForm::AForm(std::string name, int gradeToSign, int gradeToExecute) : _name(name),
	_signed(false), _gradeToSign(gradeToSign), _gradeToExecute(gradeToExecute){}

AForm::AForm(AForm const & rhs){*this = rhs;}

AForm::~AForm(void){}

AForm &	AForm::operator=(AForm const & rhs)
{
	if (this != &rhs)
	{
		this->_gradeToExecute = rhs.getGradeToExecute();
		this->_gradeToSign = rhs.getGradeToSign();
		this->_signed = rhs.getSigned();
	}
	return (*this);
}

std::string	AForm::getName(void) const{return (this->_name);}

bool	AForm::getSigned(void) const{return (this->_signed);}

int	AForm::getGradeToSign(void) const{return (this->_gradeToSign);}

int	AForm::getGradeToExecute(void) const{return (this->_gradeToExecute);}

void	AForm::beSigned(Bureaucrat const & b)
{
	this->checkGradeSign(b);
	this->_signed = true;
}

void	AForm::checkGradeSign(Bureaucrat const & rhs) const
{
	if (rhs.getGrade() > this->getGradeToSign())
		throw (AForm::GradeTooLowException());
}

void	AForm::checkGradeExec(Bureaucrat const & rhs) const
{
	if (rhs.getGrade() > this->getGradeToExecute())
		throw (AForm::GradeTooLowException());
}

std::ostream&	operator<<(std::ostream& COUT, const AForm& rhs)
{
	COUT << rhs.getName() << ", form grade to sign " << rhs.getGradeToSign()
		<< ", form grade to execute " << rhs.getGradeToExecute() << std::endl;
	return (COUT);
}

const char	*AForm::GradeToHighException::what() const throw()
{
	return ("\033[31mgrade to high\033[0m\n");
}

const char	*AForm::GradeTooLowException::what() const throw()
{
	return ("\033[31mgrade to low\033[0m\n");
}

const char	*AForm::FormNotSignedException::what() const throw()
{
	return ("\033[31mit isn't signed\033[0m\n");
}
