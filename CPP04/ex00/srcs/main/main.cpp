/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aguay <aguay@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/24 13:20:00 by aguay             #+#    #+#             */
/*   Updated: 2022/08/03 15:15:45 by aguay            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "classAnimal.hpp"
#include "classCat.hpp"
#include "classDog.hpp"
#include "classWrongAnimal.hpp"
#include "classWrongCat.hpp"

int	main(void)
{
	//	Test with virtual
	const AAnimal* meta = new AAnimal();
	const AAnimal* j = new Dog();
	const AAnimal* i = new Cat();
	std::cout << j->getType() << " " << std::endl;
	std::cout << i->getType() << " " << std::endl;
	std::cout << meta->getType() << std::endl;
	i->makeSound(); //will output the cat sound!
	j->makeSound();
	meta->makeSound();
	delete meta;
	delete j;
	delete i;
	std::cout << "\n\033[31mEnd test with virtual\n\nBegin Test without virtual\n\n\033[0m" << std::endl;
	
	//	Test without virtual
	const WrongAnimal* Wmeta = new WrongAnimal();
	const WrongAnimal* Wi = new WrongCat();
	std::cout << Wi->getType() << " " << std::endl;
	std::cout << Wmeta->getType() << std::endl;
	Wi->makeSound(); //will output the cat sound!
	Wmeta->makeSound();
	delete Wmeta;
	delete Wi;

	//	So here we can see that the fonction is static, when we call a fonction, since its initialised const WrongAnimal,
	//	we get WrongAnimal fonction onstread of Wrong cat fonction. The destructor delete only the WrongAnimal so Wrong
	//	Cat will leak.
	return 0;
}