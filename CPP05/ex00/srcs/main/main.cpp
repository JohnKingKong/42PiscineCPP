/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aguay <aguay@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/24 13:20:00 by aguay             #+#    #+#             */
/*   Updated: 2022/08/05 07:38:37 by aguay            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "classBureaucrat.hpp"

int	main(void)
{
	Bureaucrat	B0;
	Bureaucrat	B1("Clem", 12);
	Bureaucrat	B2("BOUAHAHAHAHHA", -1);
	Bureaucrat	B3("R2D2", 300);
	Bureaucrat	B4 = B1;
	return (0);
}