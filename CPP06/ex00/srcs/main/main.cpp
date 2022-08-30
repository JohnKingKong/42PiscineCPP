/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aguay <aguay@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/24 13:20:00 by aguay             #+#    #+#             */
/*   Updated: 2022/08/30 14:04:41 by aguay            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "classConverter.hpp"

int	main(int argc, char **argv)
{
	if (argc != 2)
	{
		std::cout << "The program need one argument. \033[31mError:\033[0m 0"
			<< std::endl;
		return (1);
	}

	std::string	str = argv[1];
	Converter	i(str);

	//	Print value to char
	std::cout << "char: " << i.toChar() << std::endl;

	//	Print value to int
	std::cout << "int: " << i.toInt() << std::endl;

	//	Print value to float
	std::cout << "float: " << i.toFloat() << std::endl;

	//	Print value to double
	std::cout << "double: " << i.toDouble() << std::endl;

	return (0);
}