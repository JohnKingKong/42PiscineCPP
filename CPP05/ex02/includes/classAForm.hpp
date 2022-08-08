/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   classAForm.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aguay <aguay@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/04 17:21:58 by aguay             #+#    #+#             */
/*   Updated: 2022/08/05 11:12:16 by aguay            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <string.h>
#include <iostream>
#include "classBureaucrat.hpp"

class AForm
{
	public:
		AForm(std::string name, int GradeToSign, int GradeToExecute);
		AForm(AForm const & rhs);
		virtual ~AForm(void);

		AForm &			operator=(AForm const & rhs);
		std::string		getName(void) const;
		bool			getSigned(void) const;
		int				getGradeToSign(void) const;
		int				getGradeToExecute(void) const;
		void			beSigned(Bureaucrat const & b);
		
		virtual void	execute(Bureaucrat const & executor) const = 0;

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

		class FormNotSignedException : public std::exception
		{
			public:
				virtual const char* what() const throw();
		};
	
	private:
		const std::string	_name;
		bool				_signed;
		int					_gradeToSign;
		int					_gradeToExecute;

		void	checkGradeSign(Bureaucrat const & rhs) const;
		void	checkGradeExec(Bureaucrat const & rhs) const;
		AForm(void);
};

std::ostream&	operator<<(std::ostream& COUT, const AForm& rhs);
