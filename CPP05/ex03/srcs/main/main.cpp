/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aguay <aguay@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/24 13:20:00 by aguay             #+#    #+#             */
/*   Updated: 2022/08/08 13:47:59 by aguay            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "classBureaucrat.hpp"
#include "classShrubberyCreationForm.hpp"
#include "classRobotomyRequestForm.hpp"
#include "classPresidentialPardonForm.hpp"
#include "classIntern.hpp"

int	main(void)
{
	Intern	someRandomIntern;
	AForm	*form = someRandomIntern.MakeForm("robot form", "bob");

	std::cout << *form << std::endl;
}
