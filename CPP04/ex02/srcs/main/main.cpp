/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aguay <aguay@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/24 13:20:00 by aguay             #+#    #+#             */
/*   Updated: 2022/08/03 15:19:37 by aguay            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "classAnimal.hpp"
#include "classCat.hpp"
#include "classDog.hpp"

int	main(void)
{
	Dog		chien;
	Cat		chat;

	//	Si on decommente la ligne plus bas, ca compile pas car
	//	la classe est abstraite. Cet a dire qu'elle possede une
	//	methode pure qui doit etre defini dans les enfant de AAnimal
	//	et qui empeche d'instancier un animal sans deriver


	//AAnimal	onsaispas;

	return 0;
}