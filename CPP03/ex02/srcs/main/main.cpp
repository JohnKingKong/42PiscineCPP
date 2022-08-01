/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aguay <aguay@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/24 13:20:00 by aguay             #+#    #+#             */
/*   Updated: 2022/08/01 08:18:19 by aguay            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "classClapTrap.hpp"
#include "classScavTrap.hpp"
#include "classFragTrap.hpp"

void	display_status(ScavTrap &ref);
void	display_status(FragTrap &ref);

int	main(void)
{
	FragTrap	robot3("Correcter wanna be");
	display_status(robot3);
	robot3.highFivesGuys();

	FragTrap	robot4;
	FragTrap	robot5 = robot3;
	robot3.attack("ta mere");
	robot4.attack("ma mere");
	robot5.attack("la mere a undefefined");
	
	display_status(robot3);
	display_status(robot4);
	display_status(robot5);

	robot3.highFivesGuys();
	robot4.highFivesGuys();
	robot5.highFivesGuys();

	return (0);
}


void	display_status(ScavTrap &ref)
{
	std::cout << ref.getName() << " has " << ref.getHitPoint()
		<< " hitpoint and has " << ref.getEnergyPoint() << " energy point."
		<< std::endl;
	return;
}

void	display_status(FragTrap &ref)
{
	std::cout << ref.getName() << " has " << ref.getHitPoint()
		<< " hitpoint and has " << ref.getEnergyPoint() << " energy point."
		<< std::endl;
	return;
}