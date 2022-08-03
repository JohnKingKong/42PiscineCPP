/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   classAnimal.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aguay <aguay@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/03 07:41:10 by aguay             #+#    #+#             */
/*   Updated: 2022/08/03 09:17:21 by aguay            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include <string.h>

class Animal
{
	public:

		//	Constructor's
		Animal(void);
		Animal(Animal const & rhs);

		//	Destructor's
		virtual ~Animal(void);

		//	Operator overload
		Animal &	operator=(Animal const & rhs);

		//	Methodes
		virtual void		makeSound(void) const;
		virtual std::string	getType(void) const;

	protected:

		std::string	_type;
		Animal(std::string type);
};
