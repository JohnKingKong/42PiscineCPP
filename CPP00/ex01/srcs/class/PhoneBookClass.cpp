/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBookClass.cpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aguay <aguay@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/16 11:17:36 by aguay             #+#    #+#             */
/*   Updated: 2022/06/16 14:23:46 by aguay            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBookClass.hpp"

PhoneBookClass::PhoneBookClass(void)
{
	return ;
}

PhoneBookClass::~PhoneBookClass(void)
{
	return ;
}

int	PhoneBookClass::getNbInst(void)
{
	return ((int)PhoneBookClass::_nbInst);
}

int	PhoneBookClass::getIndex(void)
{
	return (PhoneBookClass::_index);
}

void	addContact(Contact *cont)
{
	if (PhoneBookClass::getNbInst() == 8)
	{
		this->repertoire[PhoneBookClass::getIndex] = *cont;
	}
}

size_t	PhoneBookClass::_nbInst = 0;
int		PhoneBookClass::_index = 0;
