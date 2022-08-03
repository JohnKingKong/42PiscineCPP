/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   classAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aguay <aguay@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/03 07:42:52 by aguay             #+#    #+#             */
/*   Updated: 2022/08/03 09:18:32 by aguay            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "classAnimal.hpp"

//	Constructor's

Animal::Animal(void)
{
	std::cout << "Default Animal constructor called" << std::endl;
};

Animal::Animal(Animal const & rhs)
{
	std::cout << "Copy Animal contructor called" << std::endl;
	*this = rhs;
}

Animal::Animal(std::string type) : _type(type)
{
	std::cout << "Animal constructor with type initialised" << std::endl;
}

//	Destructor's
Animal::~Animal(void)
{
	std::cout << "Default Animal destructor called" << std::endl;
}

//	Operator overload's
Animal &	Animal::operator=(Animal const & rhs)
{
	if (this != &rhs)
	{
		this->_type = rhs._type;
	}
	return (*this);
}

void	Animal::makeSound(void) const
{
	std::cout <<"Animal sound" << std::endl;
}

std::string	Animal::getType(void) const
{
	return (this->_type);
}
