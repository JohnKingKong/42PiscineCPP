/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aguay <aguay@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/24 13:20:00 by aguay             #+#    #+#             */
/*   Updated: 2022/07/31 13:16:43 by aguay            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "classClapTrap.hpp"
#include "classScavTrap.hpp"

static void display_status(ScavTrap &ref)
{
	std::cout << ref.getName() << " has " << ref.getHitPoint()
		<< " hitpoint and has " << ref.getEnergyPoint() << " energy point."
		<< std::endl;
	return;
}


int	main(void)
{
	ScavTrap	robot0("roberto");
	ScavTrap	robot1;
	ScavTrap	robot2(robot0);

	robot0.guardGate();
	robot1.guardGate();
	robot2.guardGate();
	display_status(robot0);
	robot0.takeDamage(12);
	display_status(robot0);
	display_status(robot1);
	robot1.attack(robot0.getName());
	display_status(robot1);
	display_status(robot2);
	robot2.beRepaired(300);
	display_status(robot2);
	return (0);
}