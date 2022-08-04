/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   classForm.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aguay <aguay@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/04 17:22:20 by aguay             #+#    #+#             */
/*   Updated: 2022/08/04 17:46:55 by aguay            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "classForm.hpp"

Form::Form(void)
{
	return ;
}

Form::Form(std::string name, int gradeToSign, int gradeToExecute) _name(name)
{
	this->_signed = false;
	this->_gradeToSign = gradeToSign;
	this->_gradeToExecute = gradeToExecute;
}

Form::Form(Form const & rhs)
{
	*this = rhs;
}

~Form::Form(void){};

Form &	Form::operator=(Form const & rhs)
{
	if (this != &rhs)
	{
		this->_name = rhs.getName();
		this->_gradeToExecute = rhs.getGradeToExecute();
		this->_gradeToSign = rhs.getGradeToSign();
		this->_signed = rhs.getSigned();
	}
}

std::string	Form::getName(void) const
{
	return (this->_name);
}

bool	Form::getSigned(void) const
{
	return (this->_Signed);
}

int	Form::getGradeToSign(void) const
{
	return (this->getGradeToSign);
}

int	Form::getGradeToExecute(void) const
{
	return (this->_gradeToExecute);
}

// not over