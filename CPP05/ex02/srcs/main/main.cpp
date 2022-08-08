/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aguay <aguay@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/24 13:20:00 by aguay             #+#    #+#             */
/*   Updated: 2022/08/08 13:11:28 by aguay            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "classBureaucrat.hpp"
#include "classShrubberyCreationForm.hpp"
#include "classRobotomyRequestForm.hpp"
#include "classPresidentialPardonForm.hpp"

int	main(void)
{
	try
	{
		Bureaucrat	b;

		try
		{
			RobotomyRequestForm f("RobotForm");
			b.signForm(f);
			b.executeForm(f);
			b.executeForm(f);
			b.executeForm(f);
			b.executeForm(f);
			b.executeForm(f);
			f.~RobotomyRequestForm();
		}
		catch(const std::exception& e)
		{
			std::cerr << e.what() << '\n';
		}
		try
		{
			ShrubberyCreationForm f1("Jardin");
			b.signForm(f1);
			b.executeForm(f1);
			b.executeForm(f1);
			b.executeForm(f1);
			b.executeForm(f1);
			b.executeForm(f1);
			f1.~ShrubberyCreationForm();
		}
		catch(const std::exception& e)
		{
			std::cerr << e.what() << '\n';
		}
		try
		{
			PresidentialPardonForm f2("Donald Trump");
			b.signForm(f2);
			b.executeForm(f2);
			b.executeForm(f2);
			b.executeForm(f2);
			b.executeForm(f2);
			b.executeForm(f2);
			f2.~PresidentialPardonForm();
		}
		catch(const std::exception& e)
		{
			std::cerr << e.what() << '\n';
		}
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	return (0);
}
