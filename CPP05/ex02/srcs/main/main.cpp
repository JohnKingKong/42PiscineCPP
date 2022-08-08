/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aguay <aguay@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/24 13:20:00 by aguay             #+#    #+#             */
/*   Updated: 2022/08/08 11:59:59 by aguay            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "classBureaucrat.hpp"
#include "classShrubberyCreationForm.hpp"
#include "classRobotomyRequestForm.hpp"
#include "classPresidentialPardonForm.hpp"

int	main(void)
{
	Bureaucrat	b("bob", 1);
	RobotomyRequestForm f("Jardin");
	b.signForm(f);
	b.executeForm(f);
	return (0);
}
