/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   classPresidentialPardonForm.cpp.cpp                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aguay <aguay@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/05 09:34:02 by aguay             #+#    #+#             */
/*   Updated: 2022/08/08 12:25:07 by aguay            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "classPresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm(void) : AForm("PresidentialPardonForm", 145, 137){}

PresidentialPardonForm::PresidentialPardonForm(PresidentialPardonForm const & rhs) : AForm("PresidentialPardonForm", 145, 137){*this = rhs;}

PresidentialPardonForm::PresidentialPardonForm(std::string target) : AForm("PresidentialPardonForm", 145, 137), _target(target){}

PresidentialPardonForm::~PresidentialPardonForm(void){}

PresidentialPardonForm & PresidentialPardonForm::operator=(PresidentialPardonForm const & rhs)
{
	if (this != &rhs)
		*this = rhs;
	return (*this);
}

static void	executeOrder66(std::string target)
{
	std::cout << target << " a ete pardonne par Zaphod Beeblebrox" << std::endl;
}

void	PresidentialPardonForm::execute(const Bureaucrat& executor) const
{
	if (this->getSigned() == false)
		throw (PresidentialPardonForm::FormNotSignedException());
	if (this->getGradeToExecute() < executor.getGrade())
		throw (PresidentialPardonForm::GradeTooLowException());
	executeOrder66(this->_target);
}
