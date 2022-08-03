/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   classCat.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aguay <aguay@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/03 08:06:31 by aguay             #+#    #+#             */
/*   Updated: 2022/08/03 09:17:38 by aguay            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#pragma once
#include "classAnimal.hpp"

class Cat : public Animal
{
	public:

		//	Constructor's
		Cat(void);
		Cat(Cat const & rhs);
		
		//	Destructor's
		virtual ~Cat(void);

		//	Operator overload
		Cat &	operator=(Cat const & rhs);

		//	Getter
		virtual std::string	getType(void) const;
		
		//	Methodes
		virtual void	makeSound(void) const;
	
	protected:
	
		std::string	_type;
};
