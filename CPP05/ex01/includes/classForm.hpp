/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   classForm.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aguay <aguay@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/04 17:21:58 by aguay             #+#    #+#             */
/*   Updated: 2022/08/04 17:46:40 by aguay            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <string.h>
#include <iostream>

class Form
{
	public:
		Form(std::string name, int GradeToSign, int GradeToExecute);
		Form(Form const & rhs);
		~Form(void);

		Form &		operator=(Form const & rhs);
		std::string	getName(void) const;
		bool		getSigned(void) const;
		int			getGradeToSign(void) const;
		int			getGradeToExecute(void) const;

		class	GradeToHighException : public std::exception
		{
			public:
				virtual const char* what() const throw();
		};

		class GradeTooLowException : public std::exception
		{
			public:
				virtual const char* what() const throw();
		};
	
	private:
		const std::string	_name;
		bool				_signed;
		int					_gradeToSign;
		int					_gradeToExecute;

		Form(void);
};

std::ostream&	operator<<(std::ostream& COUT, const Form& rhs);
