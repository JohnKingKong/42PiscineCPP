/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aguay <aguay@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/24 13:20:00 by aguay             #+#    #+#             */
/*   Updated: 2022/07/04 09:56:55 by aguay            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "classClapTrap.hpp"

int	main(void)
{
	ClapTrap	robot = ClapTrap("Roboto");

	robot.takeDamage(5);
	robot.attack("bob");
	robot.beRepaired(60);
	robot.takeDamage(10);
	robot.attack("bob");
	robot.takeDamage(10);
	robot.attack("bob");
	robot.takeDamage(10);
	robot.attack("bob");
	robot.takeDamage(10);
	robot.attack("bob");
	robot.takeDamage(10);
	robot.attack("bob");
	robot.takeDamage(10);
	robot.attack("bob");
	robot.takeDamage(10);
	robot.attack("bob");
	return (0);
}