/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aguay <aguay@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/24 13:20:00 by aguay             #+#    #+#             */
/*   Updated: 2022/07/04 14:53:26 by aguay            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "classClapTrap.hpp"
#include "classScavTrap.hpp"

int	main(void)
{
	ScavTrap	robot0("roberto");
	ScavTrap	robot1;
	ScavTrap	robot2(robot0);

	robot0.guardGate();
	robot1.guardGate();
	robot2.guardGate();
	return (0);
}