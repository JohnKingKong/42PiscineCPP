/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   classScavTrap.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aguay <aguay@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/04 11:21:35 by aguay             #+#    #+#             */
/*   Updated: 2022/07/04 14:50:36 by aguay            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "classScavTrap.hpp"

//	Constructor's

ScavTrap::ScavTrap(void)
{
	std::cout << "ScavTrap default constructor called" << std::endl;
	this->setName("undifined");
	this->setAttackDamage(20);
	this->setEnergyPoint(50);
	this->setHitPoint(100);
}

ScavTrap::ScavTrap(std::string name)
{
	std::cout << "ScavTrap constructor called" << std::endl;
	this->setName(name);
	this->setAttackDamage(20);
	this->setEnergyPoint(50);
	this->setHitPoint(100);
}

ScavTrap::ScavTrap(ScavTrap const & rhs)
{
	std::cout << "ScavTrap copy constructor called" << std::endl;
	*this = rhs;
}

ScavTrap & ScavTrap::operator=(ScavTrap const & rhs)
{
	std::cout << "ScavTrap operator overload assignation called" << std::endl;
	if (this != &rhs)
	{
		this->setName(rhs.getName());
		this->setAttackDamage(rhs.getAttackDamage());
		this->setEnergyPoint(rhs.getEnergyPoint());
		this->setHitPoint(rhs.getHitPoint());
	}
	return (*this);
}

//	Destructor

ScavTrap::~ScavTrap(void)
{
	std::cout << "ScavTrap destructor called" << std::endl;
}

//	Methodes

void	ScavTrap::guardGate(void) const
{
	std::cout << this->getName() << " entered door guarding mode" << std::endl;
}