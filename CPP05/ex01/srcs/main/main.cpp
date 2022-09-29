/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aguay <aguay@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/24 13:20:00 by aguay             #+#    #+#             */
/*   Updated: 2022/09/28 16:35:48 by aguay            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "classBureaucrat.hpp"
#include "classForm.hpp"

int	main(void)
{
	try
	{
		Bureaucrat	B0;
		Form		f("Covid vaccination attestation", 92, 1);

		B0.signForm(f);
		std::cout << B0 << " " << f << std::endl;
		Bureaucrat B1 = B0;
		B1.decremGrade();
		std::cout << B1 << std::endl;
		while (B1.getGrade() > 1)
		{
			B1.decremGrade();
			std::cout << B1 << std::endl;
		}
		B1.decremGrade();
		std::cout << B1 << std::endl;
		B1.signForm(f);
		std::cout << f << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << "Error :" << e.what() << '\n';
	}
	

	return (0);
}