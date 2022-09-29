/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aguay <aguay@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/24 13:20:00 by aguay             #+#    #+#             */
/*   Updated: 2022/09/28 16:34:15 by aguay            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "classBureaucrat.hpp"

int	main(void)
{
	//	Trying to create a default constructor (ask user input)
	try
	{
		Bureaucrat	B0;
		std::cout << B0.getName() << " created!\n" << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << "Error :" << e.what() << '\n';
	}

	//	Try to create a Bureaucrate with valid info
	try
	{
		Bureaucrat	B1("Clem", 12);
		std::cout << B1.getName() << " created!\n" << std::endl;
		Bureaucrat	B4 = B1;
		std::cout << B4.getName() << " created!\n" << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << "Error :" << e.what() << '\n';
	}
	
	//	Trying ot create a Bureaucrate with invalid ID
	try
	{
		Bureaucrat	B2("BOUAHAHAHAHHA", -1);
		std::cout << B2.getName() << " created!\n" << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << "Error :" << e.what() << '\n';
	}
	
	try
	{
		Bureaucrat	B3("R2D2", 300);
		std::cout << B3.getName() << " created!\n" << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << "Error :" << e.what() << '\n';
	}
	return (0);
}